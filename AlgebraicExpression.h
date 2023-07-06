

#ifndef AlgebraicExpression_h
#define AlgebraicExpression_h


#include <stack>
#include <string>
using namespace::std;

string infix2postfix( const string exp );
double evaluatePostfix( const string exp );


int precedence(char op);
bool isDigit(const char ch);



#endif /* AlgebraicExpression_h */
