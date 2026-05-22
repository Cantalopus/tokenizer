#include "i_expression.h"
#include "i_term.h"
#include "token.h" 
#include "get_token.h" 

double i_expression(){
    double lhs = i_term();
    Token t = get_token();
    switch(t.kind()){
        case '+':
            return lhs + i_expression();
        case '-':
            return lhs - i_expression();

        default:
            return lhs;
    }
}