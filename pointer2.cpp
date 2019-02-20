#include <iostream>
#include <memory>
#include <string>
#include <list>

int main()
{
    std::shared_ptr<std::string> p1;    // shared_ptr that can point at a string
    std::shared_ptr<std::list<int>> p2; // shared_ptr that can point at a list of ints

    // ex 2: add the following line
    p1 = std::make_shared<std::string>("Hello");
    if (!p1)
        std::cout << "p1 is null" << std::endl;
    else {
        std::cout << "p1 is " << *p1 << std::endl;
        *p1 = "Goodbye";
    }
    if (p1)
        std::cout << "p1 is " << *p1 << std::endl;
}
