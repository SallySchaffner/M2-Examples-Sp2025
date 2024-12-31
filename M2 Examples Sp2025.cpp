// Binary Recursion
#include <iostream>
using namespace std;

// Recursive function for Fibonacci sequence
    // Recursive function for Fibonacci sequence
int fibonacci(int n) {
    if (n == 0) return 0; // Base case
    if (n == 1) return 1; // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Two recursive calls
}

int main() {
    int terms = 6;
    cout << "Fibonacci series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
    return 0;
}


