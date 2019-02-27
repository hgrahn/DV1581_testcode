#include <iostream>
#include <string>

class TestClass
{
private:
    std::string s;
public:
    TestClass()
    {
        std::cout << "TestClass: constructor" << std::endl;
        this->s = std::string("Default string");
    }

    TestClass(std::string s)
    {
        std::cout << "TestClass (" << s << "): constructor" << std::endl;
        this->s = s;
    }

    TestClass(const TestClass& tc_in)
    {
        std::cout << "TestClass: copy constructor, s = " << tc_in.s << std::endl;
        this->s = tc_in.s;
    }

    void print()
    {
        std::cout << this->s << std::endl;
    }

    ~TestClass()
    {
        std::cout << "TestClass: destructor, s = " << this->s << std::endl;
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
