
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Ghey.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  GheyLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, PROG = 12, IF = 13, ELSE = 14, 
    WHILE = 15, IDENTIFIER = 16, NUM = 17, MUL_OP = 18, DIV_OP = 19, ADD_OP = 20, 
    SUB_OP = 21, EQ_OP = 22, NEQ_OP = 23, LT_OP = 24, LE_OP = 25, GT_OP = 26, 
    GE_OP = 27, NEWLINE = 28, WS = 29
  };

  GheyLexer(antlr4::CharStream *input);
  ~GheyLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

