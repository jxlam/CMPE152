
// Generated from Ghey.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "GheyParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GheyParser.
 */
class  GheyVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GheyParser.
   */
    virtual antlrcpp::Any visitProg(GheyParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitVar_decl(GheyParser::Var_declContext *context) = 0;

    virtual antlrcpp::Any visitType(GheyParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitStmt(GheyParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitCompound_stmt(GheyParser::Compound_stmtContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(GheyParser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(GheyParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitVariable(GheyParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitExpr(GheyParser::ExprContext *context) = 0;

    virtual antlrcpp::Any visitNumber(GheyParser::NumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(GheyParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_op(GheyParser::Mul_div_opContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_op(GheyParser::Add_sub_opContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(GheyParser::Rel_opContext *context) = 0;


};

