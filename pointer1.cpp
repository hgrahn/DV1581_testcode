#include <iostream>
#include <string>

// define a simple class
struct TwoInts
{
    int a, b;
    TwoInts() {a = 2; b = 4;}
    TwoInts(int init_a, int init_b) : a(init_a), b(init_b) {};
    void print(const std::string s) {
        std::cout << s << ": a = " << a << ", b = " << b << std::endl;
    }
};

int main()
{
    TwoInts ti; // local objekt
    TwoInts *ptr_ti; // pointer

    ti.print("ti");

    //ptr_ti->print("ptr_ti");

    ptr_ti = new TwoInts(5, 7);
    ptr_ti->print("ptr_ti2");

    ti.a = 23;
    ti.print("ti");

    ptr_ti->b = 31;
    ptr_ti->print("ptr_ti2");

    //return 0;

    ptr_ti = &ti;
    ptr_ti->print("ptr_ti2");

    delete ptr_ti;
    ptr_ti = nullptr;
    // ptr_ti: now a dangling pointer => danger!
    ptr_ti->print("ptr_ti3");
}
