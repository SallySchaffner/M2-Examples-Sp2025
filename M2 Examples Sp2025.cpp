#include <iostream>
using namespace std;

void functionA(int n);
void functionB(int n);

void functionA(int n) {
    if (n <= 0) // Base case
        return;
    cout << "Function A: " << n << endl;
    functionB(n - 1); // Calls functionB
}

void functionB(int n) {
    if (n <= 0) // Base case
        return;
    cout << "Function B: " << n << endl;
    functionA(n - 2); // Calls functionA
}

int main() {
    functionA(5);
    return 0;
}
