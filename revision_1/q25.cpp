#include <iostream>
using namespace std;

int peakIndexInMountainArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // Climbing up: peak is on the right side
            start = mid + 1;
        } else {
            // Peak itself or going down: peak is mid or to the left
            end = mid;
        }
    }
    // When start == end, both are pointing to the peak
    return start;
}

int main() {
    int arr[] = {0, 2, 10, 5, 2};
    int size = 5;

    cout << "Peak index: " << peakIndexInMountainArray(arr, size) << endl;

    return 0;
}