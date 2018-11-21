#include <iostream>
using namespace std;

int main()
{
    int i, j;
    i = 1;
    j = 2;
    cout << i+j << endl;
    do {
        int v1, v2;
        cout << "Please enter two numbers to sum:" ;
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    } while (cin);
}
