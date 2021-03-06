/* Copyright (c) 2012-2017 The ANTLR Project. All rights reserved.
 * Use of this file is governed by the BSD 3-clause license that
 * can be found in the LICENSE.txt file in the project root.
 */
//
//  Created by Mike Lischke on 13.03.16.
//
#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"

#include "GheyLexer.h"
#include "GheyParser.h"

#include "Pass1Visitor.h"
#include "Pass2Visitor.h"
using namespace antlrcpp;
using namespace antlr4;
using namespace std;

int main(int, const char **)
{
    ifstream ins;
    ins.open(args[1]);

	ANTLRInputStream input(ins);
 	GheyLexer lexer(&input);
  	CommonTokenStream tokens(&lexer);

 	GheyParser parser(&tokens);
 	tree::ParseTree *tree = parser.program();

 	Pass1Visitor *pass1 = new Pass1Visitor();
 	pass1->visit(tree);

  	ostream& j_file = pass1->get_assembly_file();

	Pass2Visitor *pass2 = new Pass2Visitor(j_file);
  	pass2->visit(tree);

 	delete tree;
  	return 0;
}
