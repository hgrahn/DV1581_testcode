#include <iostream>
#include <string>

// define a simple class
struct TwoInts
{
    int a, b;
    TwoInts() {a = 2; b = 4;}
    void print(const std::string s) {
        std::cout << s << ": a = " << a << ", b = " << b << std::endl;
    }
};

int main()
{
    TwoInts ti; // local objekt
    TwoInts *ptr_ti; // pointer

    ti.print("ti");
    ptr_ti->print("ptr_ti");

    //ptr_ti = new TwoInts();
    //ptr_ti->print("ptr_ti2");

    //delete ptr_ti;
    //ptr_ti->print("ptr_ti3");
}
