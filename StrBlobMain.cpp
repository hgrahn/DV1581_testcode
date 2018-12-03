#include <iostream>
#include <memory>
#include <string>
#include "StrBlob.h"

// define an empty StrBlob objecy
StrBlob b1;

int main()
{
    StrBlob b2 = {"apple", "banana", "plum"};
    b1 = b2;
    b2.push_back("pineapple");

    std::cout << "b1.size() = " << b1.size() << std::endl;
    while (b1.size() >0) {
        std::string s = b1.back();
        std::cout << s << " ";
        b1.pop_back();
    }
    std::cout << std::endl;
}
