#include "token.h"

    Token::Token()
        :kind(' '), value(0){}
    Token::Token(char kind)
        :kind(kind), value(0){}
    Token::Token(char kind, double value)
        :kind(kind), value(value){}

    char& Token::x_kind(){
        return this->kind;
    }