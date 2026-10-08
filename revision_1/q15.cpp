#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    // 1. Loop through arr from i = 0 to size - 1
    for(int i=0;i<size;i++){
    // 2. If arr[i] == target, return i
    if(arr[i]==target){
        return i;
    }
    }
    // 3. If loop finishes without finding target:
    return -1;
}
int main() {
    int arr[] = {4, 2, 7, 1, 9, 3};
    int size = 6;
    int target = 4;

    int ans = linearSearch(arr, size, target);

    if (ans != -1) {
        cout << "Element found at index: " << ans << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}