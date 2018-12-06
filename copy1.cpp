#include <iostream>
#include <string>
#include <memory>

class TestClass
{
private:
    std::string s;
public:
    TestClass()
    {
        this->s = std::string("Default string");
        std::cout << "TestClass: constructor" << std::endl;
    }

    TestClass(std::string s)
    {
        std::cout << "TestClass (" << s << "): constructor" << std::endl;
        this->s = s;
    }

    TestClass(const TestClass& tc_in)
    {
        std::cout << "TestClass: copy constructor" << std::endl;
        s = tc_in.s;
    }

    void print()
    {
        std::cout << this->s << std::endl;
    }

    ~TestClass()
    {
        std::cout << "TestClass: destructor" << std::endl;
    }
};

// show both call-by-value and call-by-reference
void fcn(TestClass& tc_in)
{
    std::cout << "Enter fcn " << std::endl;
    std::string s("fcn");
    TestClass tc(s);
    std::cout << "Exit fcn " << std::endl;
}


int main()
{
    std::string s("Input from main()");
    TestClass tc1(s);
    fcn(tc1);
    std::cout << std::endl;
    std::cout << "Back in main()..." << std::endl;
}
