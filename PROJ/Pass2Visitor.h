#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "Pcl2BaseVisitor.h"
#include "antlr4-runtime.h"
#include "GheyVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public Pcl2BaseVisitor
{
private:
	string program_name;
	ostream& j_file;

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();

    antlrcpp::Any visitProg(GheyParser::ProgContext *ctx) override;
    antlrcpp::Any visitStmt(GheyParser::StmtContext *ctx) override;
    antlrcpp::Any visitCompound_stmt(GheyParser::Compound_stmtContext *ctx) override;
    antlrcpp::Any visitAssignment_stmt(GheyParser::Assignment_stmtContext *ctx) override;
    antlrcpp::Any visitIf_stmt(GheyParser::If_stmtContext *ctx) override;
    antlrcpp::Any visitMul_div_op(GheyParser::Mul_div_opContext *ctx) override;
    antlrcpp::Any visitAdd_sub_op(GheyParser::Add_sub_opContext *ctx) override;
    antlrcpp::Any visitRel_op(GheyParser::Rel_opContext *ctx) override;
    antlrcpp::Any visitNumber(GheyParser::NumberContext *ctx) override;
};

#endif /* PASS2VISITOR_H_ */
