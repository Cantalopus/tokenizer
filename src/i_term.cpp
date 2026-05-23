#include "i_primary.h"
#include "token.h"
#include "token_stream.h"

extern Token_stream ts;

double i_term(){
    double lhs = i_primary();
    Token t = ts.get();
    while(true){
        switch(t.kind()){
            case '*':
                lhs *= i_primary();
                t = ts.get();
                break;
            case '/':
                lhs /= i_primary();
                t = ts.get();
                break;
            default:
                ts.putback(t);
                return lhs;
        }
    }
}