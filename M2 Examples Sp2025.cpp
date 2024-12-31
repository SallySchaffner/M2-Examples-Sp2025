// Sequential Structures

#include <iostream>
#include <vector>

int main() {
    // Using a static array
    int arr[5] = { 10, 20, 30, 40, 50 };

    // Accessing elements
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Using a dynamic vector
    std::vector<int> vec = { 10, 20, 30, 40, 50 };

    // Adding an element (dynamic resizing)
    vec.push_back(60);

    // Accessing elements
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }

    return 0;
}
