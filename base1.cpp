#include <iostream>
#include <string>

class BaseClass
{
private:
    int a;
protected:
    int b;
    std::string name;
public:
    BaseClass() {
        a = 0;
        b = 0;
        name = "Default name";
        std::cout << "BaseClass default constructor: " << "name = " << name << ", a = " << a << ", b = " << b << std::endl;
    }
    BaseClass(int inita, int initb, std::string initname)
        : a(inita), b(initb), name(initname)
    {
        std::cout << "BaseClass constructor: " << "name = " << name << ", a = " << a << ", b = " << b << std::endl;
    }

    int getA() const { return a; }
    void setA(const int newa) { a = newa; }
    virtual int getB() const { return b; }
    virtual void setB(const int newb) { b = newb; }

    virtual void print() const { std::cout << "print(): name = " << name << ", a = " << a << ", b = " << b << std::endl; }
    virtual ~BaseClass() = default;
};

// inheritance can be public or private
class DerivedClass : public BaseClass // inherits from BaseClass
{
private:
    const int factor = 2;
    int c;
public:
    DerivedClass() : BaseClass()
    {
        c = 0;
        std::cout << "DerivedClass default constructor: c = " << c << std::endl;
    }
    DerivedClass(int inita, int initb, int initc, std::string initname) : BaseClass(inita, initb, initname), c(initc)
    {
        std::cout << "DerivedClass constructor: " << "name = " << initname << ", a = " << inita << ", b = " << initb << ", c = " << initc << std::endl;
    }

    int getB() const override { return factor * b; }
    void setB(const int newb) override { b = factor * newb; }

    void print() const override
    {
        BaseClass::print();
        std::cout << "Derived print(): c= " << c << std::endl;
    }
};

int main()
{
    std::cout << std::endl;
    BaseClass bc1;
    BaseClass bc2(3, 5, "bc2");
    bc1.print();
    bc2.print();
    std::cout << std::endl;

    DerivedClass dc1;
    DerivedClass dc2(5,7, 9, "dc2");
    dc1.print();
    dc2.print();
    std::cout << std::endl;

    dc2.setA(10);
    dc2.setB(10);
    dc2.print();
    dc2.setA(40);
    bc2.setB(50);
    bc2.print();
}
