#include <iostream>
using namespace std;

int factorialTail(int n, int accumulator) {
    if (n == 0 || n == 1) // Base case
        return accumulator;
    return factorialTail(n - 1, n * accumulator); // Tail recursive call
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorialTail(num, 1) << endl;
    return 0;
}
