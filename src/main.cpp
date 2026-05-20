#include <iostream>
#include "utilities.h"

int main(int argc, char** argv){

    std::cout<<"Pleas enter an expression(we can handle + and -): ";

    int lhs = 0;
    int rhs;
    char op;
    int result;

    std::cin>>lhs>>op>>rhs;

    if(op=='+')
        result=lhs+rhs;
    else if(op=='-')
        result=lhs-rhs;

    std::cout<<"Result: "<<result<<'\n';
    keep_window_open();

    return 0;
}