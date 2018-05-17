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
    antlrcpp::Any visitHeader(GheyParser::HeaderContext *ctx) override;
    antlrcpp::Any visitVar_decl(GheyParser::Var_declContext *ctx) override;
    antlrcpp::Any visitTypes(GheyParser::TypesContext *ctx) override;
    antlrcpp::Any visitVariableExpr(GheyParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitParenExpr(GheyParser::ParenExprContext *ctx) override;
    antlrcpp::Any visitNumberExpr(GheyParser::NumberExprContext *ctx) override;
    antlrcpp::Any visitMul_div_opExpr(GheyParser::Mul_div_opExprContext *ctx) override;
    antlrcpp::Any visitAdd_sub_opExpr(GheyParser::Add_sub_opExprContext *ctx) override;
    antlrcpp::Any visitRel_opExpr(GheyParser::Rel_opExprContext *ctx) override;
};

#endif
