#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    swapAlternate(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}