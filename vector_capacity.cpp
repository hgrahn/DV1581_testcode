#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
    // size should be zero; capacity is implementation defined
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    // give ivec 4 elements
    for (vector<int>::size_type ix = 0; ix != 4; ++ix)
        ivec.push_back(ix);
    // size should be 4; capacity will be >= 4 and is implementation defined
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    // give ivec 4 elements
    for (vector<int>::size_type ix = 0; ix != 4; ++ix)
        ivec.push_back(ix);
    // size should be 8; capacity will be >= 8 and is implementation defined
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    // give ivec 4 elements
    for (vector<int>::size_type ix = 0; ix != 4; ++ix)
        ivec.push_back(ix);
    // size should be 12; capacity will be >= 12 and is implementation defined
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    // give ivec 4 elements
    for (vector<int>::size_type ix = 0; ix != 4; ++ix)
        ivec.push_back(ix);
    // size should be 16; capacity will be >= 16 and is implementation defined
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    // give ivec 4 elements
    for (vector<int>::size_type ix = 0; ix != 4; ++ix)
        ivec.push_back(ix);
    // size should be 20; capacity will be >= 20 and is implementation defined
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    // give ivec 4 elements
    for (vector<int>::size_type ix = 0; ix != 4; ++ix)
        ivec.push_back(ix);
    // size should be 24; capacity will be >= 24 and is implementation defined
    cout << "ivec: size: " << ivec.size() << " capacity: " << ivec.capacity() << endl;
}
