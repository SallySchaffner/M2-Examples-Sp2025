// Direct Recursion

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) // Base case
        return 1;
    return n * factorial(n - 1); // Direct recursive call
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}
