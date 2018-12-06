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

    int& operator[](unsigned index) {
        //std::cout << " h " << index << std::endl;
        return data[index];
    }
    const int& operator[](unsigned index) const { return data[index]; }

    const int size() const { return this->sz; }
    const int max_size() const { return this->capacity; }
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
}
