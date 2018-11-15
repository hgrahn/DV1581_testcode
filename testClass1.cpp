#include <iostream>

class TestClass {
private:
    // private member variables
    int a;
    // private member functions / methods
    int helper_fcn();
public:
    // Note: No public member variables!
    // public member functions
    TestClass(); // Constructor
    ~TestClass(); // Destructor
    // public methods to read / write the private member variabel a
    void setA(int new_val);
    int getA();
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
    class1.add(class2);

}
