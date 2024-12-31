#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.displayForward();  // Output: 10 -> 20 -> 30 -> nullptr
    list.displayBackward(); // Output: 30 -> 20 -> 10 -> nullptr
    return 0;
}
