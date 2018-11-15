#include <iostream>

class TestClass {
private:
    // private member variables
    int a;
    // private member functions / methods
public:
    // public methods to read / write the private member variabel a
    void setA(int new_val);
    int getA() const;
    TestClass& addA(const TestClass &other_obj);
};

void TestClass::setA(int new_val) {
    a = new_val;
}

int TestClass::getA() const {
    return a;
}

TestClass& TestClass::addA(const TestClass &other_obj) {
    a += other_obj.a;
    return *this;
}

int main()
{
    TestClass class1, class2;
    // class1 and class2 are given some values
    class1.setA(2);
    class2.setA(3);
    std::cout << class1.getA() << ", " << class2.getA() <<std::endl;
    class1.addA(class2);
    std::cout << "Sum: " << class1.getA() << ", " << class2.getA() <<std::endl;
}
