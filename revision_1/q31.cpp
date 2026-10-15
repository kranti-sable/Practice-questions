#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 1. Declare an empty vector of integers
    vector<int> v;

    // 2. Add elements to the end using push_back()
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // 3. Access elements just like a normal array
    cout << "Element at index 0: " << v[0] << endl;

    // 4. Check how many elements are currently inside
    cout << "Size of vector: " << v.size() << endl;

    // 5. Remove the last element
    v.pop_back();

    cout << "Size after pop_back: " << v.size() << endl;

for (int i = 1; i <= 5; i++) {
    v.push_back(i);
    cout << "Added " << i 
         << " | Size: " << v.size() 
         << " | Capacity: " << v.capacity() << endl;
}
    return 0;
}