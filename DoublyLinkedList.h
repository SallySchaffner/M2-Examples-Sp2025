#pragma once

#include <iostream>

// Node structure
struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

// Linked list class
class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() : head(nullptr) {}

    // Insert at the end
    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Display list forward
    void displayForward() {
        Node* temp = head;
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }

    // Display list backward
    void displayBackward() {
        if (!head) return;
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        while (temp) {
            std::cout << temp->data << " -> ";
            temp = temp->prev;
        }
        std::cout << "nullptr" << std::endl;
    }
};

