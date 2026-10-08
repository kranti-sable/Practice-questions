#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << "Value of a: " << a << endl;
    cout << "Address of a (&a): " << &a << endl;
    cout << "Value stored in ptr (ptr): " << ptr << endl;
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;

    *ptr = 50;
    cout << "Value of a after *ptr = 50: " << a << endl;

    return 0;
}