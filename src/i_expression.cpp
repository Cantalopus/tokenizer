#include "i_expression.h"
#include "i_term.h"
#include "token.h" 
#include "token_stream.h"


extern Token_stream ts;

double i_expression(){
    double lhs = i_term();
    Token t = ts.get();
    switch(t.kind()){
        case '+':
            return lhs + i_expression();
        case '-':
            return lhs - i_expression();

        default:
            ts.putback(t);
            return lhs;
    }
}