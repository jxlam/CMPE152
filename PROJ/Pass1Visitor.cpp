#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    //cout << "=== Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProg(GheyParser::ProgContext *ctx)
{
    auto value = visitChildren(ctx);

//    cout << "=== visitProgram: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);

    return value;
}

antlrcpp::Any Pass1Visitor::visitHeader(GheyParser::HeaderContext *ctx)
{
	 string program_name = ctx->IDENTIFIER()->toString();
	 program_id = symtab_stack->enter_local(program_name);
	 program_id->set_definition((Definition)DF_PROGRAM);
	 program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
                                  new EntryValue(symtab_stack->push()));
	 symtab_stack->set_program_id(program_id);

     // Create the assembly output file.
	 j_file.open(program_name + ".j");
	 if (j_file.fail())
	 {
		 cout << "***** Cannot open assembly file." << endl;
		 exit(-99);
	 }

	 // Emit the program header.
	 j_file << ".class public " << program_name << endl;
	 j_file << ".super java/lang/Object" << endl;

	 // Emit the RunTimer and PascalTextIn fields.
	j_file << endl;
	j_file << ".field private static _runTimer LRunTimer;" << endl;
	j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVar_decl(GheyParser::Var_declContext *ctx)
{
//    cout << "=== visitDeclarations: " << ctx->getText() << endl;

    auto value = visitChildren(ctx);

    // Emit the class constructor.
    j_file << endl;
    j_file << ".method public <init>()V" << endl;
    j_file << endl;
    j_file << "\taload_0" << endl;
    j_file << "\tinvokenonvirtual    java/lang/Object/<init>()V" << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 1" << endl;
    j_file << ".limit stack 1" << endl;
    j_file << ".end method" << endl;

    j_file << "\n; " << ctx->getText() << "\n" << endl;
    return visitChildren(ctx);
    return value;
}


antlrcpp::Any Pass1Visitor::visitTypes(GheyParser::TypesContext *ctx)
{
//    cout << "=== visitTypeId: " + ctx->getText() << endl;

    TypeSpec *type;
    string type_indicator;

    string type_name = ctx->toString();
    if (type_name == "integer")
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }
    else if (type_name == "vector")
    {
        type = Predefined::char_type;
        type_indicator = "V";
    }
    else if (type_name == "1potato")
    {
    		type = Predefined::char_type;
        	type_indicator = "1";
   	}
    else if (type_name == "2potato")
    {
    		type = Predefined::char_type;
      	type_indicator = "2";
    	}
    else if (type_name == "3potato")
    {
    		type = Predefined::char_type;
      	type_indicator = "3";
   	}
    else
    {
        type = nullptr;
        type_indicator = "?";
    }

    for (SymTabEntry *id : variable_id_list) {
        id->set_typespec(type);

        // Emit a field declaration.
        j_file << ".field private static "
               << id->get_name() << " " << type_indicator << endl;
    }

    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitVariableExpr(GheyParser::VariableExprContext *ctx)
{
//    cout << "=== visitVariableExpr: " + ctx->getText() << endl;
    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    SymTabEntry *variable_id = symtab_stack->lookup(variable_name);

    ctx->type = variable_id->get_typespec();
    return visitChildren(ctx);
}

antlrcpp::Any Pass1Visitor::visitParenExpr(GheyParser::ParenExprContext *ctx)
{
//    cout << "=== visitParenExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->expr()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitNumberExpr(GheyParser::NumberExprContext *ctx)
{
//    cout << "=== visitSignedNumber: " + ctx->getText() << endl;

    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitMul_div_opExpr(GheyParser::Mul_div_opExprContext *ctx)
{
//    cout << "=== visitMulDivExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitAdd_sub_opExpr(GheyParser::Add_sub_opExprContext *ctx)
{
//    cout << "=== visitAddSubExpr: " + ctx->getText() << endl;

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

antlrcpp::Any Pass1Visitor::visitRel_opExpr(GheyParser::Rel_opExprContext *ctx)
{


    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   : real_mode    ? Predefined::real_type
                   :                nullptr;
    ctx->type = type;

    return value;
}

// expr
//type
//sign
//num or number?
