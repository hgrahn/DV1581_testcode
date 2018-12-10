#include <iostream>
#include <string>

class BaseClass
{
public:
    BaseClass() {
        a = 0;
        name = "Default name";
        std::cout << "BaseClass default constructor: " << "name = " << name << ", a = " << a << std::endl;
    }
    BaseClass(int inita, std::string initname) : a(inita), name(initname)
    {
        std::cout << "BaseClass constructor: " << "name = " << name << ", a = " << a << std::endl;
    }
    virtual int getA() const { return a; }
    virtual void setA(const int newa) { a = newa; }
    virtual void print() const { std::cout << "print(): name = " << name << ", a = " << a << std::endl; }
    virtual ~BaseClass() = default;
protected:
    int a;
    std::string name;
};

class DerivedClass1 : public BaseClass // inherits from BaseClass
{
private:
    const int factor = 2;
public:
    DerivedClass1() : BaseClass() {};
    DerivedClass1(int inita, std::string initname) : BaseClass(inita, initname)
    {
        std::cout << "DerivedClass1 constructor: " << "name = " << initname << ", a = " << inita << std::endl;
    }
    int getA() const override
    {
        std::cout << "DerivedClass1 : getA()" << std::endl;;
        return factor * a;
    }
    void setA(const int newa) override
    {
        std::cout << "DerivedClass1 : setA(" << newa << ")" << std::endl;;
        a = factor * newa;
    }
};

class DerivedClass2 : public BaseClass // inherits from BaseClass
{
private:
    const int factor = 4;
public:
    DerivedClass2() : BaseClass() {};
    DerivedClass2(int inita, std::string initname) : BaseClass(inita, initname)
    {
        std::cout << "DerivedClass2 constructor: " << "name = " << initname << ", a = " << inita << std::endl;
    }
    int getA() const override
    {
        std::cout << "DerivedClass2 : getA()" << std::endl;;
        return factor * a;
    }
    void setA(const int newa) override
    {
        std::cout << "DerivedClass2 : setA(" << newa << ")" << std::endl;;
        a = factor * newa;
    }
};

int main()
{
    std::cout << std::endl;
    BaseClass bc1(3, "bc1");
    DerivedClass1 dc1(5,"dc1");
    DerivedClass2 dc2(7,"dc2");
    bc1.print();
    dc1.print();
    dc2.print();
    std::cout << std::endl;

    dc1.setA(10);
    dc1.print();
    dc2.setA(10);
    dc2.print();
    std::cout << std::endl;

    // exemple of polymorphism
    BaseClass *bc_ptr1 = &dc1;
    BaseClass *bc_ptr2 = &dc2;
    bc_ptr1->setA(2);
    bc_ptr2->setA(4);
    dc1.print();
    dc2.print();
}
