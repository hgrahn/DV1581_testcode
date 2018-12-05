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

    /*
    TestClass(const TestClass& tc_in)
    {
        std::cout << "TestClass: copy constructor" << std::endl;
        s = tc_in.s;
    }
    */
    TestClass& operator=(const TestClass &tc_in)
    {
        std::cout << "TestClass: copy-assigment constructor" << std::endl;
        s = tc_in.s;
        return *this;
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

int main()
{
    std::string s("Input from main()");
    TestClass tc1(s);
    std::string s2("TestClass 2");
    TestClass tc2(s2);
    TestClass tc3;
    tc3 = tc2;
    tc3.print();
    std::cout << "End of main..." << std::endl;
}
