

#include <stdio.h>
#include "AlgebraicExpression.h"

string infix2postfix(const string exp){
    stack<char> opStack;
    string postfix;
    for(char c : exp){
        if(isDigit(c)){
            postfix += c;
        }
        else if (c == '('){
            opStack.push(c);
        }
        else if (c == ')'){
            while(!opStack.empty() && opStack.top() != '('){
                postfix += opStack.top();
                opStack.pop();
            }
            opStack.pop();
        }
        else if(c == '*' || c == '/' || c == '+' || c == '-'){
            while (!opStack.empty() && precedence(opStack.top()) >= precedence(c)) {
                postfix += opStack.top();
                opStack.pop();
            }
            opStack.push(c);
        }
    }
    while (!opStack.empty()) {
        postfix += opStack.top();
        opStack.pop();
    }
    return postfix;
}

double evaluatePostfix(const string exp){
    stack<double> operandStack;
    const int ASCII = 48;
    
    
    for(char c : exp){
        if(isDigit(c)){
            operandStack.push(c - ASCII);
        }
        else if (c == '*' || c == '/' || c == '+' || c == '-'){
            double operand2 = operandStack.top();
            operandStack.pop();
            double operand1 = operandStack.top();
            operandStack.pop();
            
            if(c == '*'){
                operandStack.push(operand1 * operand2);
            }
            else if (c == '/'){
                operandStack.push(operand1 / operand2);
            }
            else if (c == '+'){
                operandStack.push(operand1 + operand2);
            }
            else if (c == '-'){
                operandStack.push(operand1 - operand2);
            }
        }
    }
    return operandStack.top();
}




int precedence(char op){
    if(op == '*' || op == '/'){
        return 2;
    }
    else if (op == '+' || op == '-'){
        return 1;
    }
    else{
        return 0;
    }
}
bool isDigit(const char ch){
    if (ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9' )
        return true;
    else
        return false;
}
