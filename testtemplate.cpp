#include <iostream>
#include <string>
#include <vector>

template <typename T> class TestTemplate {
private:
    T a;
    std::string name;
public:
    TestTemplate() = delete;
    TestTemplate(T inita, std::string initname) : a(inita), name(initname) { }
    void setA(const T newa);
    T getA() const;
    void print() const;
};

template <typename T>
void TestTemplate<T>::setA(const T newa)
{
    this->a = newa;
}

template <typename T>
T TestTemplate<T>::getA() const
{
    return this->a;
}

template <typename T>
void TestTemplate<T>::print() const
{
    std::cout << "Name = " << this->name << ", a = " << this->a << std::endl;
}

int main()
{
    TestTemplate<int> ttint(10, "Int");    // two different classes
    TestTemplate<std::string> ttstring("Test string", "String");

    ttint.print();
    ttstring.print();
}
