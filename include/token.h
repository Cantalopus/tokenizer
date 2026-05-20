#pragma once

class Token{
public:
    Token();
    Token(char kind);
    Token(char kind, double value);

    char& x_kind();

private:
    char kind;
    double value;
};