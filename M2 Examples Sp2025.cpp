#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Create a vector
    vector<int> vec = { 1, 2, 3, 4, 5 };

    // Access elements
    cout << "Element at index 2: " << vec[2] << endl;

    // Update an element
    vec[2] = 10;
    cout << "Updated element at index 2: " << vec[2] << endl;

    // Add elements
    vec.push_back(6);
    cout << "Added element: " << vec.back() << endl;

    // Remove the last element
    vec.pop_back();
    cout << "After removal, last element: " << vec.back() << endl;

    // Iterate through the vector
    cout << "Vector elements: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
