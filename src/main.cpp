#include <iostream>  
#include <exception>

#include "utilities.h"
#include "i_expression.h"
#include "token_stream.h"

Token_stream ts;

int main(int argc, char** argv){

    try{
        while(std::cin)
            std::cout<<'='<<i_expression()<<'\n';
        keep_window_open();
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