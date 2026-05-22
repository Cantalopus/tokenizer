#include "i_primary.h"
#include "token.h"
#include "get_token.h" 

double i_term(){
    double lhs = i_primary();
    Token t = get_token();
    while(true){
        switch(t.kind()){
            case '*':
                lhs *= i_primary();
                t = get_token();
                break;
            case '/':
                lhs /= i_primary();
                t = get_token();
                break;
            default:
                return lhs;
        }
    }
}