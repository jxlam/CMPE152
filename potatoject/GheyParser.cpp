
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Ghey.g4 by ANTLR 4.7.1


#include "GheyVisitor.h"

#include "GheyParser.h"


using namespace antlrcpp;
using namespace antlr4;

GheyParser::GheyParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

GheyParser::~GheyParser() {
  delete _interpreter;
}

std::string GheyParser::getGrammarFileName() const {
  return "Ghey.g4";
}

const std::vector<std::string>& GheyParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& GheyParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

GheyParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GheyParser::HeaderContext* GheyParser::ProgContext::header() {
  return getRuleContext<GheyParser::HeaderContext>(0);
}

GheyParser::MainBlockContext* GheyParser::ProgContext::mainBlock() {
  return getRuleContext<GheyParser::MainBlockContext>(0);
}


size_t GheyParser::ProgContext::getRuleIndex() const {
  return GheyParser::RuleProg;
}

antlrcpp::Any GheyParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::ProgContext* GheyParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, GheyParser::RuleProg);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    header();
    setState(37);
    mainBlock();
    setState(38);
    match(GheyParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

GheyParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GheyParser::HeaderContext::PROG() {
  return getToken(GheyParser::PROG, 0);
}

tree::TerminalNode* GheyParser::HeaderContext::IDENTIFIER() {
  return getToken(GheyParser::IDENTIFIER, 0);
}


size_t GheyParser::HeaderContext::getRuleIndex() const {
  return GheyParser::RuleHeader;
}

antlrcpp::Any GheyParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::HeaderContext* GheyParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, GheyParser::RuleHeader);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(GheyParser::PROG);
    setState(41);
    match(GheyParser::IDENTIFIER);
    setState(42);
    match(GheyParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainBlockContext ------------------------------------------------------------------

GheyParser::MainBlockContext::MainBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GheyParser::BlockContext* GheyParser::MainBlockContext::block() {
  return getRuleContext<GheyParser::BlockContext>(0);
}


size_t GheyParser::MainBlockContext::getRuleIndex() const {
  return GheyParser::RuleMainBlock;
}

antlrcpp::Any GheyParser::MainBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitMainBlock(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::MainBlockContext* GheyParser::mainBlock() {
  MainBlockContext *_localctx = _tracker.createInstance<MainBlockContext>(_ctx, getState());
  enterRule(_localctx, 4, GheyParser::RuleMainBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

GheyParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GheyParser::StmtContext* GheyParser::BlockContext::stmt() {
  return getRuleContext<GheyParser::StmtContext>(0);
}

GheyParser::ExprContext* GheyParser::BlockContext::expr() {
  return getRuleContext<GheyParser::ExprContext>(0);
}

tree::TerminalNode* GheyParser::BlockContext::NEWLINE() {
  return getToken(GheyParser::NEWLINE, 0);
}


size_t GheyParser::BlockContext::getRuleIndex() const {
  return GheyParser::RuleBlock;
}

antlrcpp::Any GheyParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::BlockContext* GheyParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 6, GheyParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(53);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GheyParser::T__7:
      case GheyParser::T__9:
      case GheyParser::IF:
      case GheyParser::WHILE:
      case GheyParser::IDENTIFIER:
      case GheyParser::NUM:
      case GheyParser::ADD_OP:
      case GheyParser::SUB_OP: {
        enterOuterAlt(_localctx, 1);
        setState(46);
        stmt();
        break;
      }

      case GheyParser::T__0:
      case GheyParser::T__1:
      case GheyParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(51);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == GheyParser::T__2) {
          setState(47);
          match(GheyParser::T__2);
          setState(48);
          expr(0);
          setState(49);
          match(GheyParser::NEWLINE);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_declContext ------------------------------------------------------------------

GheyParser::Var_declContext::Var_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GheyParser::Var_declContext::IDENTIFIER() {
  return getToken(GheyParser::IDENTIFIER, 0);
}

GheyParser::TypesContext* GheyParser::Var_declContext::types() {
  return getRuleContext<GheyParser::TypesContext>(0);
}


size_t GheyParser::Var_declContext::getRuleIndex() const {
  return GheyParser::RuleVar_decl;
}

antlrcpp::Any GheyParser::Var_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitVar_decl(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::Var_declContext* GheyParser::var_decl() {
  Var_declContext *_localctx = _tracker.createInstance<Var_declContext>(_ctx, getState());
  enterRule(_localctx, 8, GheyParser::RuleVar_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(GheyParser::IDENTIFIER);
    setState(56);
    types();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypesContext ------------------------------------------------------------------

GheyParser::TypesContext::TypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GheyParser::TypesContext::getRuleIndex() const {
  return GheyParser::RuleTypes;
}

antlrcpp::Any GheyParser::TypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitTypes(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::TypesContext* GheyParser::types() {
  TypesContext *_localctx = _tracker.createInstance<TypesContext>(_ctx, getState());
  enterRule(_localctx, 10, GheyParser::RuleTypes);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(58);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GheyParser::T__3)
      | (1ULL << GheyParser::T__4)
      | (1ULL << GheyParser::T__5)
      | (1ULL << GheyParser::T__6))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

GheyParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GheyParser::Compound_stmtContext* GheyParser::StmtContext::compound_stmt() {
  return getRuleContext<GheyParser::Compound_stmtContext>(0);
}

GheyParser::Assignment_stmtContext* GheyParser::StmtContext::assignment_stmt() {
  return getRuleContext<GheyParser::Assignment_stmtContext>(0);
}

GheyParser::If_stmtContext* GheyParser::StmtContext::if_stmt() {
  return getRuleContext<GheyParser::If_stmtContext>(0);
}

GheyParser::While_loopContext* GheyParser::StmtContext::while_loop() {
  return getRuleContext<GheyParser::While_loopContext>(0);
}

GheyParser::ExprContext* GheyParser::StmtContext::expr() {
  return getRuleContext<GheyParser::ExprContext>(0);
}

GheyParser::Var_declContext* GheyParser::StmtContext::var_decl() {
  return getRuleContext<GheyParser::Var_declContext>(0);
}


size_t GheyParser::StmtContext::getRuleIndex() const {
  return GheyParser::RuleStmt;
}

antlrcpp::Any GheyParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::StmtContext* GheyParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 12, GheyParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(78);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(60);
      compound_stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(61);
      assignment_stmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(62);
      if_stmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(63);
      while_loop();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(64);
      expr(0);
      setState(68);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(65);
          match(GheyParser::T__1); 
        }
        setState(70);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
      }
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(71);
      var_decl();
      setState(75);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(72);
          match(GheyParser::T__1); 
        }
        setState(77);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmtContext ------------------------------------------------------------------

GheyParser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GheyParser::StmtContext *> GheyParser::Compound_stmtContext::stmt() {
  return getRuleContexts<GheyParser::StmtContext>();
}

GheyParser::StmtContext* GheyParser::Compound_stmtContext::stmt(size_t i) {
  return getRuleContext<GheyParser::StmtContext>(i);
}


size_t GheyParser::Compound_stmtContext::getRuleIndex() const {
  return GheyParser::RuleCompound_stmt;
}

antlrcpp::Any GheyParser::Compound_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitCompound_stmt(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::Compound_stmtContext* GheyParser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 14, GheyParser::RuleCompound_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(GheyParser::T__7);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GheyParser::T__7)
      | (1ULL << GheyParser::T__9)
      | (1ULL << GheyParser::IF)
      | (1ULL << GheyParser::WHILE)
      | (1ULL << GheyParser::IDENTIFIER)
      | (1ULL << GheyParser::NUM)
      | (1ULL << GheyParser::ADD_OP)
      | (1ULL << GheyParser::SUB_OP))) != 0)) {
      setState(81);
      stmt();
      setState(82);
      match(GheyParser::T__1);
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
    match(GheyParser::T__8);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_stmtContext ------------------------------------------------------------------

GheyParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GheyParser::Var_declContext* GheyParser::Assignment_stmtContext::var_decl() {
  return getRuleContext<GheyParser::Var_declContext>(0);
}

GheyParser::ExprContext* GheyParser::Assignment_stmtContext::expr() {
  return getRuleContext<GheyParser::ExprContext>(0);
}


size_t GheyParser::Assignment_stmtContext::getRuleIndex() const {
  return GheyParser::RuleAssignment_stmt;
}

antlrcpp::Any GheyParser::Assignment_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitAssignment_stmt(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::Assignment_stmtContext* GheyParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, GheyParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(91);
    var_decl();
    setState(92);
    match(GheyParser::EQ_OP);
    setState(93);
    expr(0);
    setState(97);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(94);
        match(GheyParser::T__1); 
      }
      setState(99);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

GheyParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GheyParser::If_stmtContext::IF() {
  return getToken(GheyParser::IF, 0);
}

std::vector<GheyParser::Compound_stmtContext *> GheyParser::If_stmtContext::compound_stmt() {
  return getRuleContexts<GheyParser::Compound_stmtContext>();
}

GheyParser::Compound_stmtContext* GheyParser::If_stmtContext::compound_stmt(size_t i) {
  return getRuleContext<GheyParser::Compound_stmtContext>(i);
}

GheyParser::ExprContext* GheyParser::If_stmtContext::expr() {
  return getRuleContext<GheyParser::ExprContext>(0);
}

tree::TerminalNode* GheyParser::If_stmtContext::ELSE() {
  return getToken(GheyParser::ELSE, 0);
}


size_t GheyParser::If_stmtContext::getRuleIndex() const {
  return GheyParser::RuleIf_stmt;
}

antlrcpp::Any GheyParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::If_stmtContext* GheyParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 18, GheyParser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(GheyParser::IF);

    setState(101);
    match(GheyParser::T__9);
    setState(102);
    expr(0);
    setState(103);
    match(GheyParser::T__10);
    setState(105);
    compound_stmt();
    setState(108);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GheyParser::ELSE) {
      setState(106);
      match(GheyParser::ELSE);
      setState(107);
      compound_stmt();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- While_loopContext ------------------------------------------------------------------

GheyParser::While_loopContext::While_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GheyParser::While_loopContext::WHILE() {
  return getToken(GheyParser::WHILE, 0);
}

GheyParser::ExprContext* GheyParser::While_loopContext::expr() {
  return getRuleContext<GheyParser::ExprContext>(0);
}

GheyParser::BlockContext* GheyParser::While_loopContext::block() {
  return getRuleContext<GheyParser::BlockContext>(0);
}


size_t GheyParser::While_loopContext::getRuleIndex() const {
  return GheyParser::RuleWhile_loop;
}

antlrcpp::Any GheyParser::While_loopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitWhile_loop(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::While_loopContext* GheyParser::while_loop() {
  While_loopContext *_localctx = _tracker.createInstance<While_loopContext>(_ctx, getState());
  enterRule(_localctx, 20, GheyParser::RuleWhile_loop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(110);
    match(GheyParser::WHILE);
    setState(111);
    expr(0);
    setState(112);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

GheyParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GheyParser::VariableContext::IDENTIFIER() {
  return getToken(GheyParser::IDENTIFIER, 0);
}


size_t GheyParser::VariableContext::getRuleIndex() const {
  return GheyParser::RuleVariable;
}

antlrcpp::Any GheyParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::VariableContext* GheyParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 22, GheyParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    match(GheyParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

GheyParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GheyParser::ExprContext::getRuleIndex() const {
  return GheyParser::RuleExpr;
}

void GheyParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VariableExprContext ------------------------------------------------------------------

GheyParser::VariableContext* GheyParser::VariableExprContext::variable() {
  return getRuleContext<GheyParser::VariableContext>(0);
}

GheyParser::VariableExprContext::VariableExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GheyParser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Add_sub_opExprContext ------------------------------------------------------------------

std::vector<GheyParser::ExprContext *> GheyParser::Add_sub_opExprContext::expr() {
  return getRuleContexts<GheyParser::ExprContext>();
}

GheyParser::ExprContext* GheyParser::Add_sub_opExprContext::expr(size_t i) {
  return getRuleContext<GheyParser::ExprContext>(i);
}

GheyParser::Add_sub_opContext* GheyParser::Add_sub_opExprContext::add_sub_op() {
  return getRuleContext<GheyParser::Add_sub_opContext>(0);
}

GheyParser::Add_sub_opExprContext::Add_sub_opExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GheyParser::Add_sub_opExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_opExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Rel_opExprContext ------------------------------------------------------------------

std::vector<GheyParser::ExprContext *> GheyParser::Rel_opExprContext::expr() {
  return getRuleContexts<GheyParser::ExprContext>();
}

GheyParser::ExprContext* GheyParser::Rel_opExprContext::expr(size_t i) {
  return getRuleContext<GheyParser::ExprContext>(i);
}

GheyParser::Rel_opContext* GheyParser::Rel_opExprContext::rel_op() {
  return getRuleContext<GheyParser::Rel_opContext>(0);
}

GheyParser::Rel_opExprContext::Rel_opExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GheyParser::Rel_opExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitRel_opExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NumberExprContext ------------------------------------------------------------------

GheyParser::NumberContext* GheyParser::NumberExprContext::number() {
  return getRuleContext<GheyParser::NumberContext>(0);
}

GheyParser::NumberExprContext::NumberExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GheyParser::NumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Mul_div_opExprContext ------------------------------------------------------------------

std::vector<GheyParser::ExprContext *> GheyParser::Mul_div_opExprContext::expr() {
  return getRuleContexts<GheyParser::ExprContext>();
}

GheyParser::ExprContext* GheyParser::Mul_div_opExprContext::expr(size_t i) {
  return getRuleContext<GheyParser::ExprContext>(i);
}

GheyParser::Mul_div_opContext* GheyParser::Mul_div_opExprContext::mul_div_op() {
  return getRuleContext<GheyParser::Mul_div_opContext>(0);
}

GheyParser::Mul_div_opExprContext::Mul_div_opExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GheyParser::Mul_div_opExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitMul_div_opExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

GheyParser::ExprContext* GheyParser::ParenExprContext::expr() {
  return getRuleContext<GheyParser::ExprContext>(0);
}

GheyParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any GheyParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::ExprContext* GheyParser::expr() {
   return expr(0);
}

GheyParser::ExprContext* GheyParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GheyParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  GheyParser::ExprContext *previousContext = _localctx;
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, GheyParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(123);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GheyParser::NUM:
      case GheyParser::ADD_OP:
      case GheyParser::SUB_OP: {
        _localctx = _tracker.createInstance<NumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(117);
        number();
        break;
      }

      case GheyParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(118);
        variable();
        break;
      }

      case GheyParser::T__9: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(119);
        match(GheyParser::T__9);
        setState(120);
        expr(0);
        setState(121);
        match(GheyParser::T__10);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(139);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(137);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Mul_div_opExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(125);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(126);
          mul_div_op();
          setState(127);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Add_sub_opExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(129);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(130);
          add_sub_op();
          setState(131);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Rel_opExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(133);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(134);
          rel_op();
          setState(135);
          expr(5);
          break;
        }

        } 
      }
      setState(141);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Mul_div_opContext ------------------------------------------------------------------

GheyParser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GheyParser::Mul_div_opContext::MUL_OP() {
  return getToken(GheyParser::MUL_OP, 0);
}

tree::TerminalNode* GheyParser::Mul_div_opContext::DIV_OP() {
  return getToken(GheyParser::DIV_OP, 0);
}


size_t GheyParser::Mul_div_opContext::getRuleIndex() const {
  return GheyParser::RuleMul_div_op;
}

antlrcpp::Any GheyParser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::Mul_div_opContext* GheyParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 26, GheyParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
    _la = _input->LA(1);
    if (!(_la == GheyParser::MUL_OP

    || _la == GheyParser::DIV_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_sub_opContext ------------------------------------------------------------------

GheyParser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GheyParser::Add_sub_opContext::ADD_OP() {
  return getToken(GheyParser::ADD_OP, 0);
}

tree::TerminalNode* GheyParser::Add_sub_opContext::SUB_OP() {
  return getToken(GheyParser::SUB_OP, 0);
}


size_t GheyParser::Add_sub_opContext::getRuleIndex() const {
  return GheyParser::RuleAdd_sub_op;
}

antlrcpp::Any GheyParser::Add_sub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_op(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::Add_sub_opContext* GheyParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 28, GheyParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(144);
    _la = _input->LA(1);
    if (!(_la == GheyParser::ADD_OP

    || _la == GheyParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

GheyParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GheyParser::Rel_opContext::EQ_OP() {
  return getToken(GheyParser::EQ_OP, 0);
}

tree::TerminalNode* GheyParser::Rel_opContext::NEQ_OP() {
  return getToken(GheyParser::NEQ_OP, 0);
}

tree::TerminalNode* GheyParser::Rel_opContext::LT_OP() {
  return getToken(GheyParser::LT_OP, 0);
}

tree::TerminalNode* GheyParser::Rel_opContext::LE_OP() {
  return getToken(GheyParser::LE_OP, 0);
}

tree::TerminalNode* GheyParser::Rel_opContext::GT_OP() {
  return getToken(GheyParser::GT_OP, 0);
}

tree::TerminalNode* GheyParser::Rel_opContext::GE_OP() {
  return getToken(GheyParser::GE_OP, 0);
}


size_t GheyParser::Rel_opContext::getRuleIndex() const {
  return GheyParser::RuleRel_op;
}

antlrcpp::Any GheyParser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::Rel_opContext* GheyParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 30, GheyParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GheyParser::EQ_OP)
      | (1ULL << GheyParser::NEQ_OP)
      | (1ULL << GheyParser::LT_OP)
      | (1ULL << GheyParser::LE_OP)
      | (1ULL << GheyParser::GT_OP)
      | (1ULL << GheyParser::GE_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

GheyParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GheyParser::NumberContext::NUM() {
  return getToken(GheyParser::NUM, 0);
}

GheyParser::SignContext* GheyParser::NumberContext::sign() {
  return getRuleContext<GheyParser::SignContext>(0);
}


size_t GheyParser::NumberContext::getRuleIndex() const {
  return GheyParser::RuleNumber;
}

antlrcpp::Any GheyParser::NumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitNumber(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::NumberContext* GheyParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 32, GheyParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GheyParser::ADD_OP

    || _la == GheyParser::SUB_OP) {
      setState(148);
      sign();
    }
    setState(151);
    match(GheyParser::NUM);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

GheyParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GheyParser::SignContext::getRuleIndex() const {
  return GheyParser::RuleSign;
}

antlrcpp::Any GheyParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::SignContext* GheyParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 34, GheyParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    _la = _input->LA(1);
    if (!(_la == GheyParser::ADD_OP

    || _la == GheyParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool GheyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GheyParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> GheyParser::_decisionToDFA;
atn::PredictionContextCache GheyParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN GheyParser::_atn;
std::vector<uint16_t> GheyParser::_serializedATN;

std::vector<std::string> GheyParser::_ruleNames = {
  "prog", "header", "mainBlock", "block", "var_decl", "types", "stmt", "compound_stmt", 
  "assignment_stmt", "if_stmt", "while_loop", "variable", "expr", "mul_div_op", 
  "add_sub_op", "rel_op", "number", "sign"
};

std::vector<std::string> GheyParser::_literalNames = {
  "", "'.'", "';'", "'return'", "'1potato'", "'2potato'", "'Integer'", "'Vector'", 
  "'{'", "'}'", "'('", "')'", "'PROG'", "'IF'", "'ELSE'", "'WHILE'", "", 
  "", "'*'", "'/'", "'+'", "'-'", "'='", "'!='", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> GheyParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "PROG", "IF", "ELSE", 
  "WHILE", "IDENTIFIER", "NUM", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", 
  "EQ_OP", "NEQ_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "NEWLINE", "WS"
};

dfa::Vocabulary GheyParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> GheyParser::_tokenNames;

GheyParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1f, 0x9e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x36, 0xa, 0x5, 
    0x5, 0x5, 0x38, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 
    0x8, 0x45, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x48, 0xb, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x7, 0x8, 0x4c, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x4f, 0xb, 0x8, 0x5, 
    0x8, 0x51, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 
    0x57, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x5a, 0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x62, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0x65, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x6f, 0xa, 0xb, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x7e, 
    0xa, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 
    0x8c, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0x8f, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x5, 0x12, 0x98, 
    0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x2, 
    0x3, 0x1a, 0x14, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
    0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x2, 0x6, 0x3, 0x2, 
    0x6, 0x9, 0x3, 0x2, 0x14, 0x15, 0x3, 0x2, 0x16, 0x17, 0x3, 0x2, 0x18, 
    0x1d, 0x2, 0x9d, 0x2, 0x26, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x6, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x8, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0xa, 0x39, 0x3, 0x2, 0x2, 0x2, 0xc, 0x3c, 0x3, 0x2, 0x2, 0x2, 0xe, 0x50, 
    0x3, 0x2, 0x2, 0x2, 0x10, 0x52, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x14, 0x66, 0x3, 0x2, 0x2, 0x2, 0x16, 0x70, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x74, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x7d, 0x3, 0x2, 0x2, 
    0x2, 0x1c, 0x90, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x92, 0x3, 0x2, 0x2, 0x2, 
    0x20, 0x94, 0x3, 0x2, 0x2, 0x2, 0x22, 0x97, 0x3, 0x2, 0x2, 0x2, 0x24, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x26, 0x27, 0x5, 0x4, 0x3, 0x2, 0x27, 0x28, 
    0x5, 0x6, 0x4, 0x2, 0x28, 0x29, 0x7, 0x3, 0x2, 0x2, 0x29, 0x3, 0x3, 
    0x2, 0x2, 0x2, 0x2a, 0x2b, 0x7, 0xe, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x12, 
    0x2, 0x2, 0x2c, 0x2d, 0x7, 0x4, 0x2, 0x2, 0x2d, 0x5, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x2f, 0x5, 0x8, 0x5, 0x2, 0x2f, 0x7, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x38, 0x5, 0xe, 0x8, 0x2, 0x31, 0x32, 0x7, 0x5, 0x2, 0x2, 0x32, 
    0x33, 0x5, 0x1a, 0xe, 0x2, 0x33, 0x34, 0x7, 0x1e, 0x2, 0x2, 0x34, 0x36, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x31, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x36, 0x38, 0x3, 0x2, 0x2, 0x2, 0x37, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 0x2, 0x38, 0x9, 0x3, 0x2, 0x2, 
    0x2, 0x39, 0x3a, 0x7, 0x12, 0x2, 0x2, 0x3a, 0x3b, 0x5, 0xc, 0x7, 0x2, 
    0x3b, 0xb, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3d, 0x9, 0x2, 0x2, 0x2, 0x3d, 
    0xd, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x51, 0x5, 0x10, 0x9, 0x2, 0x3f, 0x51, 
    0x5, 0x12, 0xa, 0x2, 0x40, 0x51, 0x5, 0x14, 0xb, 0x2, 0x41, 0x51, 0x5, 
    0x16, 0xc, 0x2, 0x42, 0x46, 0x5, 0x1a, 0xe, 0x2, 0x43, 0x45, 0x7, 0x4, 
    0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 0x2, 
    0x47, 0x51, 0x3, 0x2, 0x2, 0x2, 0x48, 0x46, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x4d, 0x5, 0xa, 0x6, 0x2, 0x4a, 0x4c, 0x7, 0x4, 0x2, 0x2, 0x4b, 0x4a, 
    0x3, 0x2, 0x2, 0x2, 0x4c, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x51, 0x3, 0x2, 
    0x2, 0x2, 0x4f, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x50, 0x3e, 0x3, 0x2, 0x2, 
    0x2, 0x50, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x50, 0x40, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x41, 0x3, 0x2, 0x2, 0x2, 0x50, 0x42, 0x3, 0x2, 0x2, 0x2, 0x50, 
    0x49, 0x3, 0x2, 0x2, 0x2, 0x51, 0xf, 0x3, 0x2, 0x2, 0x2, 0x52, 0x58, 
    0x7, 0xa, 0x2, 0x2, 0x53, 0x54, 0x5, 0xe, 0x8, 0x2, 0x54, 0x55, 0x7, 
    0x4, 0x2, 0x2, 0x55, 0x57, 0x3, 0x2, 0x2, 0x2, 0x56, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 
    0x2, 0x58, 0x59, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5b, 0x3, 0x2, 0x2, 0x2, 
    0x5a, 0x58, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0xb, 0x2, 0x2, 0x5c, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x5, 0xa, 0x6, 0x2, 0x5e, 0x5f, 
    0x7, 0x18, 0x2, 0x2, 0x5f, 0x63, 0x5, 0x1a, 0xe, 0x2, 0x60, 0x62, 0x7, 
    0x4, 0x2, 0x2, 0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 
    0x2, 0x64, 0x13, 0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x66, 0x67, 0x7, 0xf, 0x2, 0x2, 0x67, 0x68, 0x7, 0xc, 0x2, 0x2, 0x68, 
    0x69, 0x5, 0x1a, 0xe, 0x2, 0x69, 0x6a, 0x7, 0xd, 0x2, 0x2, 0x6a, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x6e, 0x5, 0x10, 0x9, 0x2, 0x6c, 0x6d, 0x7, 
    0x10, 0x2, 0x2, 0x6d, 0x6f, 0x5, 0x10, 0x9, 0x2, 0x6e, 0x6c, 0x3, 0x2, 
    0x2, 0x2, 0x6e, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x15, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x71, 0x7, 0x11, 0x2, 0x2, 0x71, 0x72, 0x5, 0x1a, 0xe, 0x2, 
    0x72, 0x73, 0x5, 0x8, 0x5, 0x2, 0x73, 0x17, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x75, 0x7, 0x12, 0x2, 0x2, 0x75, 0x19, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 
    0x8, 0xe, 0x1, 0x2, 0x77, 0x7e, 0x5, 0x22, 0x12, 0x2, 0x78, 0x7e, 0x5, 
    0x18, 0xd, 0x2, 0x79, 0x7a, 0x7, 0xc, 0x2, 0x2, 0x7a, 0x7b, 0x5, 0x1a, 
    0xe, 0x2, 0x7b, 0x7c, 0x7, 0xd, 0x2, 0x2, 0x7c, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x7d, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x78, 0x3, 0x2, 0x2, 0x2, 
    0x7d, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x7f, 
    0x80, 0xc, 0x8, 0x2, 0x2, 0x80, 0x81, 0x5, 0x1c, 0xf, 0x2, 0x81, 0x82, 
    0x5, 0x1a, 0xe, 0x9, 0x82, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0xc, 
    0x7, 0x2, 0x2, 0x84, 0x85, 0x5, 0x1e, 0x10, 0x2, 0x85, 0x86, 0x5, 0x1a, 
    0xe, 0x8, 0x86, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0xc, 0x6, 0x2, 
    0x2, 0x88, 0x89, 0x5, 0x20, 0x11, 0x2, 0x89, 0x8a, 0x5, 0x1a, 0xe, 0x7, 
    0x8a, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x83, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x87, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8f, 
    0x3, 0x2, 0x2, 0x2, 0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 
    0x2, 0x2, 0x2, 0x8e, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 
    0x2, 0x2, 0x90, 0x91, 0x9, 0x3, 0x2, 0x2, 0x91, 0x1d, 0x3, 0x2, 0x2, 
    0x2, 0x92, 0x93, 0x9, 0x4, 0x2, 0x2, 0x93, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x94, 0x95, 0x9, 0x5, 0x2, 0x2, 0x95, 0x21, 0x3, 0x2, 0x2, 0x2, 0x96, 
    0x98, 0x5, 0x24, 0x13, 0x2, 0x97, 0x96, 0x3, 0x2, 0x2, 0x2, 0x97, 0x98, 
    0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x7, 
    0x13, 0x2, 0x2, 0x9a, 0x23, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x9, 0x4, 
    0x2, 0x2, 0x9c, 0x25, 0x3, 0x2, 0x2, 0x2, 0xe, 0x35, 0x37, 0x46, 0x4d, 
    0x50, 0x58, 0x63, 0x6e, 0x7d, 0x8b, 0x8d, 0x97, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

GheyParser::Initializer GheyParser::_init;
