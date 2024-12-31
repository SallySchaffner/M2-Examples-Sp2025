#include <iostream>
using namespace std;

// Recursive function for factorial
int factorialRecursive(int n) {
    if (n == 0 || n == 1) // Base case
        return 1;
    return n * factorialRecursive(n - 1); // Recursive case
}

// Iterative function for factorial 
int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num = 5;

    cout << "Factorial of " << num << " (recursive): " << factorialRecursive(num) << endl;
    cout << "Factorial of " << num << " (iteration): " << factorialIterative(num) << endl;
    return 0;
}

