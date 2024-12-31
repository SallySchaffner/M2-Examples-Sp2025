#include <iostream>
using namespace std;

// Recursive binary search
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) // Base case
        return -1;

    int mid = (low + high) / 2;
    if (arr[mid] == key) // Base case
        return mid;

    if (arr[mid] > key)
        return binarySearch(arr, low, mid - 1, key); // Recursive case
    return binarySearch(arr, mid + 1, high, key);   // Recursive case
}

int main() {
    int arr[] = { 2, 4, 6, 8, 10, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    int index = binarySearch(arr, 0, n - 1, key);
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
