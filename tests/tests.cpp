#include <iostream>
#include <cassert>
#include "token.h"
#include "utilities.h"

int main(int argc, char** argv){

    Token t1;
    assert(t1.kind() == ' ');
    assert(t1.value() == 0);

    Token t2('%');
    assert(t2.kind() == '%');
    assert(t2.value() == 0);

    Token t3('#', 33);
    assert(t3.kind() == '#');
    assert(t3.value() == 33);

    t1 = t3;
    assert(t1.kind() == '#');
    assert(t1.value() == 33);

    t1.kind() = '&';
    assert(t1.kind() == '&');
    assert(t3.kind() == '#');

    return 0;
}