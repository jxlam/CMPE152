#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

Pass2Visitor::Pass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
	labelCount = 1;
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProg(GheyParser::ProgContext *ctx)
{
    auto value = visitChildren(ctx);
    //j_file.close();

    return value;
}

antlrcpp::Any Pass2Visitor::visitHeader(GheyParser::HeaderContext *ctx)
{
    program_name = ctx->IDENTIFIER()->toString();
    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitMainBlock(GheyParser::MainBlockContext *ctx)
{
    // Emit the main program header.
    j_file << endl;
    j_file << ".method public static main([Ljava/lang/String;)V" << endl;
    j_file << endl;
    j_file << "\tnew RunTimer" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
    j_file << "\tputstatic        " << program_name
           << "/_runTimer LRunTimer;" << endl;
    j_file << "\tnew PascalTextIn" << endl;
    j_file << "\tdup" << endl;
    j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
    j_file << "\tputstatic        " + program_name
           << "/_standardIn LPascalTextIn;" << endl;

    auto value = visitChildren(ctx);

    // Emit the main program epilogue.
    j_file << endl;
    j_file << "\tgetstatic     " << program_name
               << "/_runTimer LRunTimer;" << endl;
    j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
    j_file << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 16" << endl;
    j_file << ".limit stack 16" << endl;
    j_file << ".end method" << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitStmt(GheyParser::StmtContext *ctx)
{
    j_file << endl << "; " + ctx->getText() << endl << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitAssignment_stmt(GheyParser::Assignment_stmtContext *ctx)
{
    auto value = visit(ctx->expr());

    string type_indicator =
                  (ctx->expr()->type == Predefined::integer_type) ? "I"
                : (ctx->expr()->type == Predefined::real_type)    ? "F"
                :                                                   "?";

    // Emit a field put instruction.
    j_file << "\tputstatic\t" << program_name
           << "/" << ctx->var_decl()->IDENTIFIER()->toString()
           << " " << type_indicator << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitAdd_sub_opExpr(GheyParser::Add_sub_opExprContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->add_sub_op()->getText();
    string opcode;

    if (op == "+")
    {
        opcode = integer_mode ? "iadd"
               : real_mode    ? "fadd"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "isub"
               : real_mode    ? "fsub"
               :                "????";
    }

    // Emit an add or subtract instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitIf_stmt(GheyParser::If_stmtContext *ctx)
{
	auto value = visit(ctx->expr());
	int currentLabelCount = this->labelCount++;
	if(ctx->children.size() == 1) //no else statement
	{
		j_file << "ifeq     L" + to_string(currentLabelCount);
		value = visitChildren(ctx);

	}
	return value;
}

antlrcpp::Any Pass2Visitor::visitWhile_loop(GheyParser::While_loopContext *ctx)
{
	int loopLabel = this->labelCount++;
	int nextLabel = this->labelCount++;

	j_file << "L" << loopLabel<< ":" << endl;

    auto value = visit(ctx->expr());

    j_file << "ifeq     L" << nextLabel<< endl;
    value = visit(ctx->block());
    j_file << "goto     L" << loopLabel<< endl;


    j_file << "L" << nextLabel
           << ":" << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitMul_div_opExpr(GheyParser::Mul_div_opExprContext *ctx)
{
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool real_mode    =    (type1 == Predefined::real_type)
                        && (type2 == Predefined::real_type);

    string op = ctx->mul_div_op()->getText();
    string opcode;

    if (op == "*")
    {
        opcode = integer_mode ? "imul"
               : real_mode    ? "fmul"
               :                "????";
    }
    else
    {
        opcode = integer_mode ? "idpv"
               : real_mode    ? "fdiv"
               :                "????";
    }

    // Emit a multiply or divide instruction.
    j_file << "\t" << opcode << endl;

    return value;
}

antlrcpp::Any Pass2Visitor::visitVariableExpr(GheyParser::VariableExprContext *ctx)
{
    string variable_name = ctx->variable()->IDENTIFIER()->toString();
    TypeSpec *type = ctx->type;

    string type_indicator = (type == Predefined::integer_type) ? "I"
                          : (type == Predefined::real_type)    ? "F"
                          :                                      "?";

    // Emit a field get instruction.
    j_file << "\tgetstatic\t" << program_name
           << "/" << variable_name << " " << type_indicator << endl;

    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitNumberExpr(GheyParser::NumberExprContext *ctx)
{
    auto value = visitChildren(ctx);
    TypeSpec *type = ctx->number()->type;

    if (ctx->children[0]->toString() == "-")
    {
        string opcode = (type == Predefined::integer_type) ? "ineg"
                      : (type == Predefined::real_type)    ? "fneg"
                      :                                      "?neg";

        // Emit a negate instruction.
        j_file << "\t" << opcode << endl;
    }

    return value;
}

//antlrcpp::Any Pass2Visitor::visitIntegerConst(GheyParser::IntegerConstContext *ctx)
//{
//    // Emit a load constant instruction.
//    j_file << "\tldc\t" << ctx->getText() << endl;
//
//    return visitChildren(ctx);
//}
//
//antlrcpp::Any Pass2Visitor::visitFloatConst(GheyParser::FloatConstContext *ctx)
//{
//    // Emit a load constant instruction.
//    j_file << "\tldc\t" << ctx->getText() << endl;
//
//    return visitChildren(ctx);
//}
