#include "CircularLinkedList.h"

int main() {
    CircularLinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display(); // Output: 10 -> 20 -> 30 -> (back to head)
    return 0;
}