#include <iostream>
#include <string>
#include <memory>

int main()
{
    // shared_ptr that points to an int with value 42
    std::shared_ptr<int> p3 = std::make_shared<int>(42);
    // p4 points to a string with value 9999999999
    std::shared_ptr<std::string> p4 = std::make_shared<std::string>(10, '9');
    // p5 points to an int that is value initialized (§ 3.3.1 (p. 98)) to 0
    std::shared_ptr<int> p5 = std::make_shared<int>();

    std::cout << "p3: " << p3 << ", p4: " << p4 << ", p5: " << p5 << std::endl;
    std::cout << "*p3: " << *p3 << ", *p4: " << *p4 << ", *p5: " << *p5 << std::endl;
    std::cout << std::endl;

    return 0;
    // example of reference counting
    auto p = std::make_shared<int>(42);
    auto q(p);
    std::cout << "p: " << p << ", q: " << q << std::endl;
    std::cout << "*p: " << *p << ", *q: " << *q << std::endl;
    std::cout << "p.use_count() = " << p.use_count() << std::endl;

    q = nullptr; // remove q pointer
    std::cout << "p: " << p << ", q: " << q << std::endl;
    std::cout << "p.use_count() = " << p.use_count() << std::endl;
    std::cout << std::endl;
}
