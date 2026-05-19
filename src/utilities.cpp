#include "utilities.h"
#include<iostream>
#include<limits>

void keep_window_open(){
    std::cout<<"Press Enter to exit... ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}