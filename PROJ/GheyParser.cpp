
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

std::vector<GheyParser::StmtContext *> GheyParser::ProgContext::stmt() {
  return getRuleContexts<GheyParser::StmtContext>();
}

GheyParser::StmtContext* GheyParser::ProgContext::stmt(size_t i) {
  return getRuleContext<GheyParser::StmtContext>(i);
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
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(28);
      stmt();
      setState(31); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GheyParser::T__6)
      | (1ULL << GheyParser::T__8)
      | (1ULL << GheyParser::IF)
      | (1ULL << GheyParser::IDENTIFIER)
      | (1ULL << GheyParser::NUM)
      | (1ULL << GheyParser::ADD_OP)
      | (1ULL << GheyParser::SUB_OP))) != 0));
   
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

GheyParser::TypeContext* GheyParser::Var_declContext::type() {
  return getRuleContext<GheyParser::TypeContext>(0);
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
  enterRule(_localctx, 2, GheyParser::RuleVar_decl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(33);
    match(GheyParser::IDENTIFIER);
    setState(34);
    type();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

GheyParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GheyParser::TypeContext::getRuleIndex() const {
  return GheyParser::RuleType;
}

antlrcpp::Any GheyParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

GheyParser::TypeContext* GheyParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, GheyParser::RuleType);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(36);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GheyParser::T__0)
      | (1ULL << GheyParser::T__1)
      | (1ULL << GheyParser::T__2)
      | (1ULL << GheyParser::T__3)
      | (1ULL << GheyParser::T__4))) != 0))) {
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
  enterRule(_localctx, 6, GheyParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(55);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      compound_stmt();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(39);
      assignment_stmt();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(40);
      if_stmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(41);
      expr(0);
      setState(45);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(42);
          match(GheyParser::T__5); 
        }
        setState(47);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
      }
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(48);
      var_decl();
      setState(52);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(49);
          match(GheyParser::T__5); 
        }
        setState(54);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx);
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
  enterRule(_localctx, 8, GheyParser::RuleCompound_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(GheyParser::T__6);
    setState(63);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GheyParser::T__6)
      | (1ULL << GheyParser::T__8)
      | (1ULL << GheyParser::IF)
      | (1ULL << GheyParser::IDENTIFIER)
      | (1ULL << GheyParser::NUM)
      | (1ULL << GheyParser::ADD_OP)
      | (1ULL << GheyParser::SUB_OP))) != 0)) {
      setState(58);
      stmt();
      setState(59);
      match(GheyParser::T__5);
      setState(65);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(66);
    match(GheyParser::T__7);
   
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

tree::TerminalNode* GheyParser::Assignment_stmtContext::IDENTIFIER() {
  return getToken(GheyParser::IDENTIFIER, 0);
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
  enterRule(_localctx, 10, GheyParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(GheyParser::IDENTIFIER);
    setState(69);
    match(GheyParser::EQ_OP);
    setState(70);
    expr(0);
    setState(74);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(71);
        match(GheyParser::T__5); 
      }
      setState(76);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
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
  enterRule(_localctx, 12, GheyParser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(GheyParser::IF);

    setState(78);
    match(GheyParser::T__8);
    setState(79);
    expr(0);
    setState(80);
    match(GheyParser::T__9);
    setState(82);
    compound_stmt();
    setState(85);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GheyParser::ELSE) {
      setState(83);
      match(GheyParser::ELSE);
      setState(84);
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
  enterRule(_localctx, 14, GheyParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
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

GheyParser::NumberContext* GheyParser::ExprContext::number() {
  return getRuleContext<GheyParser::NumberContext>(0);
}

tree::TerminalNode* GheyParser::ExprContext::IDENTIFIER() {
  return getToken(GheyParser::IDENTIFIER, 0);
}

std::vector<GheyParser::ExprContext *> GheyParser::ExprContext::expr() {
  return getRuleContexts<GheyParser::ExprContext>();
}

GheyParser::ExprContext* GheyParser::ExprContext::expr(size_t i) {
  return getRuleContext<GheyParser::ExprContext>(i);
}

GheyParser::Mul_div_opContext* GheyParser::ExprContext::mul_div_op() {
  return getRuleContext<GheyParser::Mul_div_opContext>(0);
}

GheyParser::Add_sub_opContext* GheyParser::ExprContext::add_sub_op() {
  return getRuleContext<GheyParser::Add_sub_opContext>(0);
}

GheyParser::Rel_opContext* GheyParser::ExprContext::rel_op() {
  return getRuleContext<GheyParser::Rel_opContext>(0);
}


size_t GheyParser::ExprContext::getRuleIndex() const {
  return GheyParser::RuleExpr;
}

antlrcpp::Any GheyParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GheyVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
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
  size_t startState = 16;
  enterRecursionRule(_localctx, 16, GheyParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(96);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GheyParser::NUM:
      case GheyParser::ADD_OP:
      case GheyParser::SUB_OP: {
        setState(90);
        number();
        break;
      }

      case GheyParser::IDENTIFIER: {
        setState(91);
        match(GheyParser::IDENTIFIER);
        break;
      }

      case GheyParser::T__8: {
        setState(92);
        match(GheyParser::T__8);
        setState(93);
        expr(0);
        setState(94);
        match(GheyParser::T__9);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(112);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(110);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(98);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(99);
          mul_div_op();
          setState(100);
          expr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(102);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(103);
          add_sub_op();
          setState(104);
          expr(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(106);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(107);
          rel_op();
          setState(108);
          expr(5);
          break;
        }

        } 
      }
      setState(114);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
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
  enterRule(_localctx, 18, GheyParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GheyParser::ADD_OP

    || _la == GheyParser::SUB_OP) {
      setState(115);
      sign();
    }
    setState(118);
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
  enterRule(_localctx, 20, GheyParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(120);
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
  enterRule(_localctx, 22, GheyParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
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
  enterRule(_localctx, 24, GheyParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
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
  enterRule(_localctx, 26, GheyParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
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

bool GheyParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 8: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "prog", "var_decl", "type", "stmt", "compound_stmt", "assignment_stmt", 
  "if_stmt", "variable", "expr", "number", "sign", "mul_div_op", "add_sub_op", 
  "rel_op"
};

std::vector<std::string> GheyParser::_literalNames = {
  "", "'1potato'", "'2potato'", "'3potato'", "'Integer'", "'Vector'", "';'", 
  "'['", "']'", "'('", "')'", "'IF'", "'ELSE'", "", "", "'*'", "'/'", "'+'", 
  "'-'", "'='", "'!='", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> GheyParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "IF", "ELSE", "IDENTIFIER", 
  "NUM", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", "NEQ_OP", "LT_OP", 
  "LE_OP", "GT_OP", "GE_OP", "NEWLINE", "WS"
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
    0x3, 0x1c, 0x83, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x6, 0x2, 0x20, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 
    0x21, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x2e, 0xa, 0x5, 0xc, 0x5, 
    0xe, 0x5, 0x31, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x35, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x38, 0xb, 0x5, 0x5, 0x5, 0x3a, 0xa, 0x5, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x40, 0xa, 0x6, 0xc, 0x6, 0xe, 
    0x6, 0x43, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x7, 0x7, 0x4b, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x4e, 0xb, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x5, 0x8, 0x58, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x63, 
    0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 
    0x71, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x74, 0xb, 0xa, 0x3, 0xb, 0x5, 0xb, 
    0x77, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x2, 0x3, 0x12, 
    0x10, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 
    0x1a, 0x1c, 0x2, 0x6, 0x3, 0x2, 0x3, 0x7, 0x3, 0x2, 0x13, 0x14, 0x3, 
    0x2, 0x11, 0x12, 0x3, 0x2, 0x15, 0x1a, 0x2, 0x84, 0x2, 0x1f, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x23, 0x3, 0x2, 0x2, 0x2, 0x6, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x39, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xc, 0x46, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x10, 0x59, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x62, 0x3, 0x2, 0x2, 0x2, 0x14, 0x76, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x80, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x20, 0x5, 0x8, 0x5, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x21, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x3, 0x3, 0x2, 0x2, 0x2, 0x23, 0x24, 0x7, 
    0xf, 0x2, 0x2, 0x24, 0x25, 0x5, 0x6, 0x4, 0x2, 0x25, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x26, 0x27, 0x9, 0x2, 0x2, 0x2, 0x27, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x28, 0x3a, 0x5, 0xa, 0x6, 0x2, 0x29, 0x3a, 0x5, 0xc, 0x7, 0x2, 
    0x2a, 0x3a, 0x5, 0xe, 0x8, 0x2, 0x2b, 0x2f, 0x5, 0x12, 0xa, 0x2, 0x2c, 
    0x2e, 0x7, 0x8, 0x2, 0x2, 0x2d, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x36, 0x5, 0x4, 0x3, 0x2, 0x33, 0x35, 0x7, 0x8, 0x2, 
    0x2, 0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x38, 0x3, 0x2, 0x2, 0x2, 
    0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x3a, 0x3, 0x2, 0x2, 0x2, 0x38, 0x36, 0x3, 0x2, 0x2, 0x2, 0x39, 0x28, 
    0x3, 0x2, 0x2, 0x2, 0x39, 0x29, 0x3, 0x2, 0x2, 0x2, 0x39, 0x2a, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x39, 0x32, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x41, 0x7, 0x9, 0x2, 
    0x2, 0x3c, 0x3d, 0x5, 0x8, 0x5, 0x2, 0x3d, 0x3e, 0x7, 0x8, 0x2, 0x2, 
    0x3e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x41, 0x42, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x3, 0x2, 0x2, 0x2, 0x43, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x45, 0x7, 0xa, 0x2, 0x2, 0x45, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x47, 0x7, 0xf, 0x2, 0x2, 0x47, 0x48, 0x7, 0x15, 0x2, 
    0x2, 0x48, 0x4c, 0x5, 0x12, 0xa, 0x2, 0x49, 0x4b, 0x7, 0x8, 0x2, 0x2, 
    0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0xd, 
    0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 
    0xd, 0x2, 0x2, 0x50, 0x51, 0x7, 0xb, 0x2, 0x2, 0x51, 0x52, 0x5, 0x12, 
    0xa, 0x2, 0x52, 0x53, 0x7, 0xc, 0x2, 0x2, 0x53, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x54, 0x57, 0x5, 0xa, 0x6, 0x2, 0x55, 0x56, 0x7, 0xe, 0x2, 0x2, 
    0x56, 0x58, 0x5, 0xa, 0x6, 0x2, 0x57, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x58, 0x3, 0x2, 0x2, 0x2, 0x58, 0xf, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 
    0x7, 0xf, 0x2, 0x2, 0x5a, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x8, 
    0xa, 0x1, 0x2, 0x5c, 0x63, 0x5, 0x14, 0xb, 0x2, 0x5d, 0x63, 0x7, 0xf, 
    0x2, 0x2, 0x5e, 0x5f, 0x7, 0xb, 0x2, 0x2, 0x5f, 0x60, 0x5, 0x12, 0xa, 
    0x2, 0x60, 0x61, 0x7, 0xc, 0x2, 0x2, 0x61, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x62, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x62, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x5e, 0x3, 0x2, 0x2, 0x2, 0x63, 0x72, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 
    0xc, 0x8, 0x2, 0x2, 0x65, 0x66, 0x5, 0x18, 0xd, 0x2, 0x66, 0x67, 0x5, 
    0x12, 0xa, 0x9, 0x67, 0x71, 0x3, 0x2, 0x2, 0x2, 0x68, 0x69, 0xc, 0x7, 
    0x2, 0x2, 0x69, 0x6a, 0x5, 0x1a, 0xe, 0x2, 0x6a, 0x6b, 0x5, 0x12, 0xa, 
    0x8, 0x6b, 0x71, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0xc, 0x6, 0x2, 0x2, 
    0x6d, 0x6e, 0x5, 0x1c, 0xf, 0x2, 0x6e, 0x6f, 0x5, 0x12, 0xa, 0x7, 0x6f, 
    0x71, 0x3, 0x2, 0x2, 0x2, 0x70, 0x64, 0x3, 0x2, 0x2, 0x2, 0x70, 0x68, 
    0x3, 0x2, 0x2, 0x2, 0x70, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x3, 
    0x2, 0x2, 0x2, 0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x13, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 
    0x2, 0x75, 0x77, 0x5, 0x16, 0xc, 0x2, 0x76, 0x75, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x77, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x79, 0x7, 0x10, 0x2, 0x2, 0x79, 0x15, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x9, 0x3, 0x2, 0x2, 0x7b, 0x17, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x9, 
    0x4, 0x2, 0x2, 0x7d, 0x19, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x9, 0x3, 
    0x2, 0x2, 0x7f, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x9, 0x5, 0x2, 
    0x2, 0x81, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xd, 0x21, 0x2f, 0x36, 0x39, 0x41, 
    0x4c, 0x57, 0x62, 0x70, 0x72, 0x76, 
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
