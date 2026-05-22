#include <stdexcept>

#include "utilities.h"
#include "i_expression.h"
#include "token.h"
#include "get_token.h" 

double i_primary(){
    Token t = get_token();
    switch(t.kind()){
        case '(':
            {
                double d = i_expression();
                t = get_token();
                if(t.kind() != ')') error("')'expected");
                return d;
            }
        case '8':
            return t.value();
        default:
            throw std::runtime_error("primary expected");
    }
}