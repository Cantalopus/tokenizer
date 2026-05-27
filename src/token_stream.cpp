#include <iostream>

#include "token_stream.h"

    Token_stream::Token_stream()
        :m_full(false), m_buffer(0)
    {

    }

    Token Token_stream::get(){
        if(m_full){
            m_full = false;
            return m_buffer;
        }

        char ch;
        std::cin>>ch;

        switch(ch){
            case ';':
            case 'q':
            case '(': case ')':
            case '+': case '-': case '*': case '/':
            case '%': case '^':
            return Token(ch);
            case '.':
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
            {
                std::cin.putback(ch);
                double val;
                std::cin>>val;
                return Token('8', val);
            }
            default:
                throw std::runtime_error("error: bad token");
        }
    }
    void Token_stream::putback(Token t){
        m_buffer = t;
        m_full = true;
    }