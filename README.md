# Algebraic Expressions

In this script, we implement a program for manipulating algebraic expressions of infix and postfix forms. OUR implementation enables us to convert an expression of infix form to postfix form as well as to evaluate postfix expressions.
Our implementation includes the following global functions.
* string infix2postfix( const string exp );
* double evaluatePostfix( const string exp );


## Some assumptions
1. The input strings are syntactically correct expressions; for example, we assume that the string is a valid infix expression if the infix2postfix function is called, or we assume that the string is a valid postfix expression if the evaluatePostfix function is called.
2. An input string can include only digits and binary operators. We assume that only the binary operators *, /, +, and - are allowed (no unary and exponentiation operators are allowed). Moreover, we assume that operands are single digits (digits from 1 to 9). In the case of infix expressions, the string can also include parentheses in addition to digits and binary operators. For simplicity, you may assume that there are no spaces between the digits and operators.
