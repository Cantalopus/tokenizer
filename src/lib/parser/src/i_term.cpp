#include "i_power.h"
#include "token.h"
#include "token_stream.h"

extern Token_stream ts;

double i_term(){
    double lhs = i_power();
    Token t = ts.get();
    while(true){
        switch(t.kind()){
            case '*':
                lhs *= i_power();
                t = ts.get();
                break;
            case '/':
                lhs /= i_power();
                t = ts.get();
                break;
            case '%':
                {
                    double d = i_term();
                    int i1 = int(lhs);
                    int i2 = int(d);
                    return i1%i2;
                }
            default:
                ts.putback(t);
                return lhs;
        }
    }    
}