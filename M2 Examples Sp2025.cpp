#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> myForwardList = { 10, 20, 30 };

    // Insert after the first element
    myForwardList.insert_after(myForwardList.begin(), 15);

    // Access front
    cout << "Front: " << myForwardList.front() << endl;

    // Iterate and display elements
    cout << "Forward List elements: ";
    for (auto& elem : myForwardList) {
        cout << elem << " ";
    }
    cout << endl;

    // Insert at front
    myForwardList.push_front(5);

    // Insert after a specific position
    auto it = myForwardList.begin();
    myForwardList.insert_after(it, 15);

    // Display the forward list
    cout << "Forward List elements: ";
    for (auto& elem : myForwardList) {
        cout << elem << " ";
    }
    cout << endl;




    return 0;
}
