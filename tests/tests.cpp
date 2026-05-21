#include <iostream>
#include <cassert>
#include "token.h"
#include "utilities.h"

int main(int argc, char** argv){

    Token t1;
    assert(t1.kind() == ' ');
    assert(t1.value() == 0 );
    std::cout<<"t1.kind()  : "<<t1.kind() <<std::endl;
    std::cout<<"t1.value() : "<<t1.value()<<std::endl;

    Token t2('%');
    assert(t2.kind() == '%');
    assert(t2.value() == 0 );
    std::cout<<"t2.kind()  : "<<t2.kind() <<std::endl;
    std::cout<<"t2.value() : "<<t2.value()<<std::endl;

    Token t3('#', 33);
    assert(t3.kind() == '#');
    assert(t3.value() == 33);
    std::cout<<"t3.kind()  : "<<t3.kind() <<std::endl;
    std::cout<<"t3.value() : "<<t3.value()<<std::endl;

    t1 = t3;
    assert(t1.kind() == '#');
    assert(t1.value() == 33);
    std::cout<<"t1.kind()  : "<<t1.kind() <<std::endl;
    std::cout<<"t1.value() : "<<t1.value()<<std::endl;

    t1.kind() = '&';
    assert(t1.kind() == '&');
    assert(t3.kind() == '#');
    std::cout<<"t1.kind()  : "<<t1.kind() <<std::endl;
    std::cout<<"t3.kind()  : "<<t3.kind() <<std::endl;

    t2 =std::move(t3);
    std::cout<<"t2.kind()  : "<<t2.kind() <<std::endl;
    std::cout<<"t2.value() : "<<t2.value()<<std::endl;
    std::cout<<"t3.kind()  : "<<t3.kind() <<std::endl;
    std::cout<<"t3.value() : "<<t3.value()<<std::endl;

    return 0;
}