#include <iostream>

class BaseClass
{
private:
    int a;
public:
    BaseClass() = default;
    BaseClass(int inita, int initb) : a(inita), b(initb) { }
    int getA() const { return a; }
    void setA(const int newa) { a = newa; }
    virtual int getB() const { return b; }
    virtual void setB(const int newb) { b = newb; }
    void print() const { std::cout << "a = " << a << ", b = " << b << std::endl; }
    virtual ~BaseClass() = default;
protected:
    int b;
};

class DerivedClass : public BaseClass // inherits from BaseClass
{
private:
    int factor = 2;
public:
    DerivedClass() = default;
    DerivedClass(int inita, int initb) : BaseClass(inita, initb) { }
    int getB() const override { return factor * b; }
    void setB(const int newb) override { b = factor * newb; }
};

int main()
{
    BaseClass bc1;
    BaseClass bc2(3, 5);
    bc1.print();
    bc2.print();
    DerivedClass dc1;
    DerivedClass dc2(5,7);
    dc1.print();
    dc2.print();
    dc2.setA(10);
    dc2.setB(10);
    dc2.print();
}
