#include <iostream>
using namespace std;

// Recursive function for Fibonacci
int fibonacciRecursive(int n) {
    if (n == 0) // Base case
        return 0;
    if (n == 1) // Base case
        return 1;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2); // Recursive case
}

void fibonacciIterative(int terms) {
    int a = 0, b = 1, c;
    cout << "Fibonacci series (iterative): " << a << " " << b << " ";
    for (int i = 2; i < terms; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
    cout << endl;
}


int main() {
    int terms = 6;
    cout << "Fibonacci series (recursive): ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacciRecursive(i) << " ";
    }
    cout << endl;

    int n = 6;
    fibonacciIterative(n);

    return 0;
}
