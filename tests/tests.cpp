#include <iostream>  
#include <exception>

#include "utilities.h"
#include "i_expression.h"
#include "token.h"
#include "token_stream.h"

Token_stream ts;

int main(/*int argc, char** argv*/){

    try{
        while(std::cin){
            std::cout<<'>';
            Token t = ts.get();
            while(t.kind()==';')t=ts.get();
            if(t.kind()=='q') {keep_window_open(); return 0;}
            ts.putback(t);
            std::cout<<"="<<i_expression()<<std::endl;
        }
    }
    catch(std::exception& e){
        std::cerr<<e.what()<<std::endl;
        keep_window_open();
        return 1;
    }
    catch(...){
        std::cerr<<"exception \n";
        keep_window_open();
        return 2;
    }
}