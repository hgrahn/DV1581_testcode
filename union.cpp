#include <iostream>

union Token {
// members are public by default
    char   cval;
    int    ival;
    int    ival2;
    double dval;
};

int main()
{
    Token t;
    t.cval = 'a';
    std::cout << "cval = " << t.cval << ", ival = " << t.ival << ", dval = " << t.dval << std::endl;
    t.ival = 37;
    std::cout << "cval = " << t.cval << ", ival = " << t.ival << ", ival2 = " << t.ival2 << ", dval = " << t.dval << std::endl;
    t.dval = 5.0;
    std::cout << "cval = " << t.cval << ", ival = " << t.ival << ", dval = " << t.dval << std::endl;
}
