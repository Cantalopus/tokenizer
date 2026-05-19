#include <iostream>
#include "utilities.h"

int main(int argc, char** argv){

    std::cout<<"Pleas enter an expression(we can handle + and -): ";

    int lval = 0;
    int rval;
    char op;
    int res;

    std::cin>>lval>>op>>rval;

    if(op=='+')
        res=lval+rval;
    else if(op=='-')
        res=lval-rval;

    std::cout<<"Result: "<<res<<'\n';
    keep_window_open();

    return 0;
}