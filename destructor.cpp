#include <iostream>
#include <string>
#include <memory>

class TestClass
{
public:
    TestClass()
    {
        std::cout << "TestClass: constructor" << std::endl;
    }

    TestClass(std::string s)
    {
        std::cout << "TestClass (" << s << "): constructor" << std::endl;
    }

    ~TestClass()
    {
        std::cout << "TestClass: destructor" << std::endl;
    }
};

std::shared_ptr<TestClass> tmp = nullptr;

void fcn()
{
    std::cout << "Enter fcn " << std::endl;
    std::string s("fcn");
    TestClass tc(s);
    TestClass tc2;
    std::string s2("shared_ptr");
    tmp = std::make_shared<TestClass>(s2);
    std::cout << "Exit fcn " << std::endl;
}


int main()
{
    fcn();
    std::cout << std::endl;
    std::cout << "Back in main()..." << std::endl;
    tmp = nullptr;
}
