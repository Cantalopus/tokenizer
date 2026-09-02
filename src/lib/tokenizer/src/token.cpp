#include "token.h"

    Token::Token()
        :m_kind(' '), m_value(0){}
    Token::Token(char kind)
        :m_kind(kind), m_value(0){}
    Token::Token(char kind, double value)
        :m_kind(kind), m_value(value){}

    char& Token::kind(){
        return m_kind;
    }
    double& Token::value(){
        return m_value;
    }