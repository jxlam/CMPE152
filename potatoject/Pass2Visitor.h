#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "GheyBaseVisitor.h"
#include "antlr4-runtime.h"
#include "GheyVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public GheyBaseVisitor
{
private:
	string program_name;
	ostream& j_file;
	int labelCount;

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();

    antlrcpp::Any visitProg(GheyParser::ProgContext *ctx) override;
    antlrcpp::Any visitHeader(GheyParser::HeaderContext *ctx) override;
    antlrcpp::Any visitMainBlock(GheyParser::MainBlockContext *ctx) override;
    antlrcpp::Any visitStmt(GheyParser::StmtContext *ctx) override;
    antlrcpp::Any visitWhile_loop(GheyParser::While_loopContext *ctx) override;
    //antlrcpp::Any visitCompound_stmt(GheyParser::Compound_stmtContext *ctx) override;
    antlrcpp::Any visitAssignment_stmt(GheyParser::Assignment_stmtContext *ctx) override;
    antlrcpp::Any visitIf_stmt(GheyParser::If_stmtContext *ctx) override;
    antlrcpp::Any visitMul_div_opExpr(GheyParser::Mul_div_opExprContext *ctx) override;
    antlrcpp::Any visitAdd_sub_opExpr(GheyParser::Add_sub_opExprContext *ctx) override;
   // antlrcpp::Any visitRel_opExpr(GheyParser::Rel_opExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(GheyParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitNumberExpr(GheyParser::NumberExprContext *ctx) override;
};

#endif /* PASS2VISITOR_H_ */
