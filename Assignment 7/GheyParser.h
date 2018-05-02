
#pragma once


#include "antlr4-runtime.h"




class  GheyParser : public antlr4::Parser {
public:
  enum {
	  T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7,
	  T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, IF = 14,
	  ELSE = 15, MUL_OP = 16, DIV_OP = 17, ADD_OP = 18, SUB_OP = 19, EQ_OP = 20,
	  NEQ_OP = 21, LT_OP=22, LE_OP=23, GT_OP=24, GE_OP=25, IDENTIFIER = 22, NUM = 23, NEWLINE = 24, WS = 25
  };

  enum {
	RuleProgram = 0, RuleVar_decl = 1, RuleType = 2, RuleStmt = 3, RuleCompound_stmt = 4,
	RuleAssignment_stmt = 5, RuleIf_stmt = 6, RuleExpr = 7, RuleVariable = 8, RuleNumber = 9,
	RuleSign = 10, RuleMul_div_op = 11, RuleAdd_sub_op = 12, RuleRel_op = 13
  };

  GheyParser(antlr4::TokenStream *input);
  ~GheyParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgContext;
  class Var_declContext;
  class TypeContext;
  class StmtContext;
  class Compound_stmtContext;
  class Assignment_stmtContext;
  class If_stmtContext;
  class ExprContext; 
  class VariableContext;
  class NumberContext;
  class SignContext;
  class Mul_div_opContext;
  class Add_sub_opContext;
  class Rel_opContext;


  class  ProgContext : public antlr4::ParserRuleContext {
  public:
    ProgContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ProgContext* prog();

  class  Var_declContext : public antlr4::ParserRuleContext {
  	  public:
	  Var_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
      virtual size_t getRuleIndex() const override;
      antlr4::tree::TerminalNode *IDENTIFIER();
      TypeContext *Type();

      virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  Var_declContext* var_decl();

  class  TypeContext : public antlr4::ParserRuleContext {
	public:
	TypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
	virtual size_t getRuleIndex() const override;

	virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  TypeContext* Type();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExprContext *expr();
    If_stmtContext *if_stmt();
    Assignment_stmtContext *assignment_stmt();
    Var_declContext *var_decl();
    Compound_stmtContext *compound_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  StmtContext* stmt();

  class  Compound_stmtContext : public antlr4::ParserRuleContext {
  public:
    Compound_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  Compound_stmtContext* compoundStmt();

  class  Assignment_StmtContext : public antlr4::ParserRuleContext {
  public:
  	Assignment_StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
 	virtual size_t getRuleIndex() const override;
 	antlr4::tree::TerminalNode *IDENTIFIER();
   	ExprContext *expr();

   	virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  Assignment_StmtContext* assignment_Stmt();

  class  If_StmtContext : public antlr4::ParserRuleContext {
  public:
   	If_StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
  	virtual size_t getRuleIndex() const override;
  	antlr4::tree::TerminalNode *IF();
  	std::vector<Compound_stmtContext *> compound_stat();
  	Compound_stmtContext* compound_stat(size_t i);
  	ExprContext *expr();
  	antlr4::tree::TerminalNode *ELSE();

    	virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

 If_StmtContext* If_Stmt();

 class  ExprContext : public antlr4::ParserRuleContext {
 public:
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Mul_div_opContext *mul_div_op();
   	Add_sub_opContext *add_sub_op();
    	Rel_opContext *rel_op();

    	virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  ExprContext* expr();
  ExprContext* expr(int precedence);

 class  VariableContext : public antlr4::ParserRuleContext {
 public:
	 VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
	 virtual size_t getRuleIndex() const override;
	 antlr4::tree::TerminalNode *IDENTIFIER();

	 virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  VariableContext* variable();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
	  NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
	  virtual size_t getRuleIndex() const override;
	  antlr4::tree::TerminalNode *NUM();
	  SignContext *sign();

	  virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  NumberContext* number();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
  	SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    	virtual size_t getRuleIndex() const override;

    	virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  SignContext* sign();

  class  Mul_div_opContext : public antlr4::ParserRuleContext {
  public:
  	Mul_div_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
 	virtual size_t getRuleIndex() const override;
  	antlr4::tree::TerminalNode *MUL_OP();
  	antlr4::tree::TerminalNode *DIV_OP();

	virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  Mul_div_opContext* mul_div_op();

  class  Add_sub_opContext : public antlr4::ParserRuleContext {
  public:
	Add_sub_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
 	virtual size_t getRuleIndex() const override;
 	antlr4::tree::TerminalNode *ADD_OP();
	antlr4::tree::TerminalNode *SUB_OP();

	virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  Add_sub_opContext* add_sub_op();

  class  Rel_opContext : public antlr4::ParserRuleContext {
  public:
  	Rel_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
 	virtual size_t getRuleIndex() const override;
 	antlr4::tree::TerminalNode *EQ_OP();
	antlr4::tree::TerminalNode *NEQ_OP();

	virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;

  };

  Rel_opContext* rel_op();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

