#include <iostream>
using namespace std;

int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };

    // Access and update elements
    cout << "Element at index 2: " << arr[2] << endl;
    arr[2] = 35; // Update element
    cout << "Updated element at index 2: " << arr[2] << endl;

    // Iterate through the array
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
