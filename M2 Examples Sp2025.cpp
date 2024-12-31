// Memoization

#include <iostream>
#include <vector>
using namespace std;

// Recursive Fibonacci function
int fibonacci(int n) {
    if (n == 0) return 0; // Base case
    if (n == 1) return 1; // Base case
    return fibonacci(n - 1) + fibonacci(n - 2); // Repeated calculations
}

// Recursive Fibonacci with memoization
int fibonacciMemo(int n, vector<int>& memo) {
    if (n == 0) return 0; // Base case
    if (n == 1) return 1; // Base case
    if (memo[n] != -1) return memo[n]; // Use stored result
    memo[n] = fibonacciMemo(n - 1, memo) + fibonacciMemo(n - 2, memo); // Store result
    return memo[n];
}

int main() {
    int n = 10;
    cout << "Without memoization: " << endl;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

    cout << "With memoization: " << endl;
    vector<int> memo(n + 1, -1); // Initialize memo array with -1
    cout << "Fibonacci(" << n << ") = " << fibonacciMemo(n, memo) << endl;

    return 0;
}

