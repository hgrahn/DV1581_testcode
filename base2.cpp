#include <iostream>

class BaseClass
{
public:
    BaseClass() {
        std::cout << "BaseClass default constructor: " << std::endl;
    }
    virtual ~BaseClass() = default;
};

// inheritance can be public or private
class DerivedClass : public BaseClass // inherits from BaseClass
{
public:
    DerivedClass() = default;
};

int main()
{
    std::cout << std::endl;
    BaseClass bc1;
    std::cout << std::endl;

    DerivedClass dc1;
    std::cout << std::endl;
}
