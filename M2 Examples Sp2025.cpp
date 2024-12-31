#include <iostream>
using namespace std;

// Recursive function for Fibonacci
int fibonacci(int n) {
    if (n == 0) // Base case
        return 0;
    if (n == 1) // Base case
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int terms = 6;
    cout << "Fibonacci series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
