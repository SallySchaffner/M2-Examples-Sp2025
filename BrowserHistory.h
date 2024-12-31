#pragma once
#include <iostream>
using namespace std;

class BrowserHistory {
private:
    struct Node {
        string url;
        Node* next;
        Node* prev;
        Node(string u) : url(u), next(nullptr), prev(nullptr) {}
    };
    Node* current;

public:
    BrowserHistory() : current(nullptr) {}

    void visit(string url) {
        Node* newNode = new Node(url);
        if (current) {
            current->next = newNode;
            newNode->prev = current;
        }
        current = newNode;
        cout << "Visited: " << url << endl;
    }

    void back() {
        if (current && current->prev) {
            current = current->prev;
            cout << "Back to: " << current->url << endl;
        }
        else {
            cout << "No previous page\n";
        }
    }

    void forward() {
        if (current && current->next) {
            current = current->next;
            cout << "Forward to: " << current->url << endl;
        }
        else {
            cout << "No next page\n";
        }
    }
};
