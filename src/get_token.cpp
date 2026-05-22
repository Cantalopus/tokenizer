#include <iostream>
#include <utilities.h>
#include "token.h"

Token get_token(){

    char ch;
    std::cin>>ch;

    switch(ch){
        case '(':
        case ')':
        case '+':
        case '-':
        case '*':
        case '/':
        return Token(ch);
        case '.':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        {
            std::cin.putback(ch);
            double val;
            std::cin>>val;
            return Token('8', val);
        }
        default:
            throw std::runtime_error("bad token");
    }
}