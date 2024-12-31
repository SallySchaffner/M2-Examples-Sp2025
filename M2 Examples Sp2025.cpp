#include <iostream>
using namespace std;

// Recursive function to calculate the sum of an array
int sumArray(int arr[], int n) {
    if (n == 0) // Base case
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1); // Recursive call
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Sum of array elements: " << sumArray(arr, size) << endl;
    return 0;
}
