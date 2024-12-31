#include <iostream>
using namespace std;

int main() {
    // Dynamically allocate an array
    int* arr = new int[5] {1, 2, 3, 4, 5};

    // Access and update elements
    cout << "Element at index 4: " << arr[4] << endl;
    arr[4] = 10;
    cout << "Updated element at index 4: " << arr[4] << endl;

    // Iterate through the array
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free allocated memory
    delete[] arr;

    return 0;
}
