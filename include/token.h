#pragma once

class Token{
public:
    Token();
    Token(char kind);
    Token(char kind, double value);

    char& kind();
    double& value();

private:
    char m_kind;
    double m_value;
};