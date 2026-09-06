#include <gtest/gtest.h>
#include <sstream>

#include "i_expression.h"
#include "token_stream.h"

Token_stream ts;

TEST(CalculatorTest, HandlesUnarySignsInsideParentheses)
{
    std::istringstream input{"5-(-6)+(+7);"};

    auto* old_buffer = std::cin.rdbuf(input.rdbuf());

    double result = i_expression();

    std::cin.rdbuf(old_buffer);

    EXPECT_EQ(result, 18);
}








































//#include <iostream>  
//#include <exception>
//
//#include "utilities.h"
//#include "i_expression.h"
//#include "token.h"
//#include "token_stream.h"
//
//#include <gtest/gtest.h>
//
//TEST(CalculatorTests, GoogleTestWorks)
//{
//    EXPECT_EQ(2 + 2, 4);
//}

//Token_stream ts;
//
//int main(/*int argc, char** argv*/){
//
//    try{
//        while(std::cin){
//            std::cout<<'>';
//            Token t = ts.get();
//            while(t.kind()==';')t=ts.get();
//            if(t.kind()=='q') {keep_window_open(); return 0;}
//            ts.putback(t);
//            std::cout<<"="<<i_expression()<<std::endl;
//        }
//    }
//    catch(std::exception& e){
//        std::cerr<<e.what()<<std::endl;
//        keep_window_open();
//        return 1;
//    }
//    catch(...){
//        std::cerr<<"exception \n";
//        keep_window_open();
//        return 2;
//    }
//}