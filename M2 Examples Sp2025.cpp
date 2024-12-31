// M2 Examples Sp2025.cpp : This file contains examples for M2. Arrays, Linked Lists, and Recursion

#include <iostream>
#include "CircularLinkedList.h"

int main() {
    CircularLinkedList scheduler;
    scheduler.addProcess("P1");
    scheduler.addProcess("P2");
    scheduler.addProcess("P3");
    scheduler.simulateRoundRobin(6); // P1 -> P2 -> P3 -> P1 -> P2 -> P3
    return 0;
}

