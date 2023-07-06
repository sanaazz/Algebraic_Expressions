

#include <iostream>
#include <iomanip>

#include "AlgebraicExpression.h"

using namespace::std;


int main(int argc, const char * argv[]) {
    
    
    cout << infix2postfix("(3 +5) -8*4") << endl;
    cout << infix2postfix("1 + 2 * 3 + ( 4 * 5 + 6 ) * 7") << endl;
    cout << evaluatePostfix("653-8*+2/") << endl;
    cout << infix2postfix("3+4*2/(1-5)") << endl;
   // cout << evaluatePostfix("3+4*2/(1-5)") << endl;
    cout << infix2postfix("(1+2)*(3+4)") << endl;
  //  cout << evaluatePostfix("(1+2)*(3+4)") << endl;
    
    cout << endl;
    
    
    cout << infix2postfix("1-2+3") << endl;
    cout << infix2postfix("1/(2*3)") << endl;
    cout << infix2postfix("(1+2)*3") << endl;
    cout << infix2postfix("1-(2+3)") << endl;
    cout << infix2postfix("1-(2/3*4)") << endl;
    cout << infix2postfix("1/2/3-(4+5)*6") << endl;
    cout << infix2postfix("1*(2/3/4)+5") << endl;
    cout << infix2postfix("1-(2+3*4)/5") << endl;

    cout << endl;

    cout << evaluatePostfix("12-3+") << endl;
    cout << evaluatePostfix("123*/") << endl;
    cout << evaluatePostfix("12+3*") << endl;
    cout << evaluatePostfix("123+-") << endl;
    cout << evaluatePostfix("123/4*-") << endl;
    cout << evaluatePostfix("12/3/45+6*-") << endl;
    cout << evaluatePostfix("123/4/*5+") << endl;
    cout << evaluatePostfix("1234*+5/-") << endl;
    cout << evaluatePostfix("653-8*+2/") << endl;
    cout << infix2postfix("(5+3)-2*(6+1)-1*(7+3)/3+(4/2)") << endl;
    cout << evaluatePostfix(infix2postfix("(5+3)-2*(6+1)-1*(7+3)/3+(4/2)"))<<endl;
    
    cout<< infix2postfix("(2-3+4)*(5+6*7)") << endl;
    cout<< evaluatePostfix(infix2postfix("(2-3+4)*(5+6*7)"))<< endl;
    cout << infix2postfix ("(3+5)-8*4") << endl ;//35+84*-
    cout << fixed << setprecision(2) <<  evaluatePostfix ("653-8*+2/") << endl;//11.00
    cout << fixed << setprecision(2) <<  evaluatePostfix ("52/3*") << endl;//7.50
    cout << infix2postfix ("(5/2)*3") << endl ;//52/3*
    cout << fixed << setprecision(2) <<  evaluatePostfix (infix2postfix ("3-2*2")) << endl;//-1.00

    return 0;
}
