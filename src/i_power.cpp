#include <cmath>

#include "i_primary.h"
#include "token.h"
#include "token_stream.h"

extern Token_stream ts;

double i_power(){
    double lhs = i_primary();
    Token t = ts.get();
    switch(t.kind()){
        case '^':
            double rhs = i_power();
            return std::pow(lhs,rhs);
        }
            ts.putback(t);
            return lhs;
}