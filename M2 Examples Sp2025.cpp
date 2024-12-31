#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> myList = { 10, 20, 30 };

    cout << "Original list: " << endl;
    for (auto& elem : myList) {
        cout << elem << " ";
    }
    cout << endl;

    // Insert at the beginning
    myList.push_front(5);

    // Insert at the end
    myList.push_back(40);

    cout << "Adding to beginning and end of list: " << endl;

    // Access front and back
    cout << "Front: " << myList.front() << ", Back: " << myList.back() << endl;

    // Iterate and display elements
    cout << "List elements: ";
    for (auto& elem : myList) {
        cout << elem << " ";
    }
    cout << endl;

    // Insert at any position
    auto it = myList.begin();
    advance(it, 2); // Move iterator to the 3rd element
    myList.insert(it, 25);

    // Display the list
    cout << "After inserting 25 at index 2, List elements: ";
    for (auto& elem : myList) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
