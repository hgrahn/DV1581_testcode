#include <iostream>
#include <string>

class IndexClass
{
private:
    int capacity;
    int sz;
    int current;
    int *data;
public:
    // two constructors
    IndexClass()
    {
        this->capacity = 16;
        this->sz = 0;
        this->current = 0;
        this->data = new int[16]();
    }
    IndexClass(int capacity)
    {
        this->capacity = capacity;
        this->sz = 0;
        this->current = 0;
        this->data = new int[capacity]();
    }

    const int get_current() const { return this->current;}
    const int get_current_val() const { return data[this->current];}
    const int size() const { return this->sz; }
    const int max_size() const { return this->capacity; }

    int& operator[](unsigned index) { return data[index]; }
    const int& operator[](unsigned index) const { return data[index]; }

    // add operators for increment and decrement
    int operator++() { return ++current; }
    int operator--() { return --current; }

    // add operator for member access
    int operator*() const { return data[current]; }

    void print()
    {
        std::cout << "capacity = " << this->capacity
            << ", size = " << this->sz << ", current = " << this->current
            << std::endl;
        for (unsigned i = 0; i < capacity; i++)
            std::cout << " " << data[i];
        std::cout << std::endl;
    }
};

int main()
{
    IndexClass ic1;
    IndexClass ic2(8);
    ic1.print();
    ic2.print();

    ic1[2] = 3;
    ic1.print();
    for (int i = 0; i < ic2.max_size(); i++) ic2[i] = i;
    ic2.print();
    std::cout << std::endl;
    return 0;

    std::cout << ic2[ic2.get_current()] << std::endl;
    ++ic2;
    std::cout << "ic2[ic2.get_current()] = " << ic2[ic2.get_current()] << std::endl;
    ++ic2;
    std::cout << "*ic2 = " << *ic2 << std::endl;

}
