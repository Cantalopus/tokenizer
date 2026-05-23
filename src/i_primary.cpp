#include <stdexcept>

#include "utilities.h"
#include "i_expression.h"
#include "token.h"
#include "token_stream.h"

extern Token_stream ts;

double i_primary(){
    Token t = ts.get();
    switch(t.kind()){
        case '(':
            {
                double d = i_expression();
                t = ts.get();
                if(t.kind() != ')') error("')'expected");
                return d;
            }
        case '8':
            return t.value();
        default:
            throw std::runtime_error("primary expected");
    }
}