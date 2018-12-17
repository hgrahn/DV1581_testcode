#include <iostream>
#include <string>

class Base1
{
protected:
    int a;
    std::string name1;
public:
    Base1() {
        a = 0;
        name1 = "Default name1";
        std::cout << "Base1 default constructor: " << "name1 = " << name1 << ", a = " << a << std::endl;
    }
    Base1(int inita, std::string initname) : a(inita), name1(initname)
    {
        std::cout << "Base1 constructor: " << "name1 = " << name1 << ", a = " << a << std::endl;
    }

    int getA() const { return a; }
    void setA(const int newa) { a = newa; }
    void print1() const { std::cout << "print1(): name1 = " << name1 << ", a = " << a << std::endl; }
    virtual ~Base1() = default;
};

class Base2
{
protected:
    int b;
    std::string name2;
public:
    Base2() {
        b = 0;
        name2 = "Default name2";
        std::cout << "Base2 default constructor: " << "name2 = " << name2 << ", b = " << b << std::endl;
    }
    Base2(int initb, std::string initname) : b(initb), name2(initname)
    {
        std::cout << "Base2 constructor: " << "name2 = " << name2 << ", b = " << b << std::endl;
    }

    int getB() const { return b; }
    void setB(const int newb) { b = newb; }

    void print2() const { std::cout << "print2(): name2 = " << name2 << ", b = " << b << std::endl; }
    virtual ~Base2() = default;
};

// inheritance can be public or private
class DerivedClass : public Base1, public Base2 // inherits from Base1 and Base2
{
private:
    int c;
public:
    DerivedClass() : Base1(), Base2()
    {
        c = 0;
        std::cout << "DerivedClass default constructor: c = " << c << std::endl;
    }
    DerivedClass(int inita, int initb, int initc, std::string initname1, std::string initname2)
        : Base1(inita, initname1), Base2(initb, initname2), c(initc)
    {
        std::cout << "DerivedClass constructor: "
            << "name1 = " << initname1 << ", name2 = " << initname2
            << ", a = " << inita << ", b = " << initb << ", c = "
            << initc << std::endl;
    }

    void print() const
    {
        Base1::print1();
        Base2::print2();
        std::cout << "Derived print(): c= " << c << std::endl;
    }
};

int main()
{
    std::cout << std::endl;
    Base1 bc1(3, "bc1");
    Base2 bc2(5, "bc2");
    bc1.print1();
    bc2.print2();
    std::cout << std::endl;

    DerivedClass dc1(5, 7, 9, "dc1", "dc2");;
    dc1.print();
    std::cout << std::endl;
}
