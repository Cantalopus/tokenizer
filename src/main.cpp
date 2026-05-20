#include <iostream>  

#include "utilities.h"
#include "token.h"


int main(int argc, char** argv){

    std::cout<<"Pleas enter an expression(we can handle +,-,*,and /)\n";
    std::cout<<"add an x to end expression(e.g., 1+2*3x): ";

    Token t;
    t.x_kind() = '+';

    std::cout<<"t kind: "<<t.x_kind()<<std::endl;

    int lhs = 0;
    int rhs;
    char op;
    std::cin>>lhs;

    if(!std::cin)
        error("no first operand");
    while(std::cin>>op){
        if(op!='x')
            std::cin>>rhs;
        if(!std::cin)
            error("no second operand");
        switch(op){
            case '+':
                lhs+=rhs;
                break;
            case '-':
                lhs-=rhs;
                break;
            case '*':
                lhs*=rhs;
                break;
            case '/':
                lhs/=rhs;
                break;
            default:
                std::cout<<"Result: "<<lhs<<'\n';
                keep_window_open();
                return 0;
        }
    }
    error("bad expression");
}