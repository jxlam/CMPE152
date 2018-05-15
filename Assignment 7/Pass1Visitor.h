#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include <iostream>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "GheyBaseVisitor.h"
#include "antlr4-runtime.h"
#include "GheyVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public GheyBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;
    ofstream j_file;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProg(GheyParser::ProgContext *ctx) override;
    antlrcpp::Any visitVar_decl(GheyParser::Var_declContext *ctx) override;
    antlrcpp::Any visitType(GheyParser::TypeContext *ctx) override;
    antlrcpp::Any visitVariable(GheyParser::VariableContext *ctx) override;
    antlrcpp::Any visitExpr(GheyParser::ExprContext *ctx) override;
    antlrcpp::Any visitNumber(GheyParser::NumberContext *ctx) override;
    antlrcpp::Any visitSign(GheyParser::SignContext *ctx) override; //do unsign and sign instead?
    antlrcpp::Any visitMul_div_op(GheyParser::Mul_div_opContext *ctx) override;
    antlrcpp::Any visitAdd_sub_op(GheyParser::Add_sub_opContext *ctx) override;
    antlrcpp::Any visitRel_op(GheyParser::Rel_opContext *ctx) override;
};

#endif
