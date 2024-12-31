#pragma once

#include <iostream>
using namespace std;

class CircularLinkedList {
private:
    struct Node {
        string process;
        Node* next;
        Node(string p) : process(p), next(nullptr) {}
    };
    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    void addProcess(string process) {
        Node* newNode = new Node(process);
        if (!head) {
            head = newNode;
            head->next = head;
        }
        else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
        cout << "Added process: " << process << endl;
    }

    void simulateRoundRobin(int cycles) {
        if (!head) return;
        Node* temp = head;
        while (cycles--) {
            cout << "Processing: " << temp->process << endl;
            temp = temp->next;
        }
    }
};

