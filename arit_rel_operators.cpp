#include <iostream>
#include <string>

class AritRelClass
{
private:
    int a, b;
    std::string name;
public:
    AritRelClass() = default;
    AritRelClass(int la, int lb, std::string lname) : a(la), b(lb), name(lname) {}
    AritRelClass(AritRelClass& old) : a(old.a), b(old.b), name(old.name) {}

    int getA() const { return a; }
    int getB() const { return b; }
    void print()
    {
        std::cout << this->name << ": a = " << this->a << ", b = " << this->b << std::endl;
    }


};

bool operator==(const AritRelClass &lhs, const AritRelClass &rhs)
{
    return (lhs.getA() == rhs.getA()) && (lhs.getB() == rhs.getB());
}
bool operator!=(const AritRelClass &lhs, const AritRelClass &rhs)
{
    return !(lhs == rhs);
}

bool operator<(const AritRelClass &lhs, const AritRelClass &rhs)
{
    return (lhs.getA() + lhs.getB()) < (rhs.getA() + rhs.getB());
}

int main()
{
    AritRelClass tc1(2,4,"tc1");
    AritRelClass tc2(3,5,"tc2");
    AritRelClass tc3;
    tc3 = tc2;

    tc1.print();
    tc2.print();
    tc3.print();
    if (tc1 == tc2)
        std::cout << "tc1 == tc2" << std::endl;
    if (tc1 != tc2)
        std::cout << "tc1 != tc2" << std::endl;
    if (tc2 == tc3)
        std::cout << "tc2 == tc3" << std::endl;
    if (tc2 != tc3)
        std::cout << "tc2 != tc3" << std::endl;
    if (tc1 < tc2)
        std::cout << "tc1 < tc2" << std::endl;
    else
        std::cout << "! (tc1 < tc2)" << std::endl;

}
