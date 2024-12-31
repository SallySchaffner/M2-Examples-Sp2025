#include <iostream>
using namespace std;

// Recursive function to find the sum of digits
int sumOfDigits(int n) {
    if (n == 0) // Base case
        return 0;
    return (n % 10) + sumOfDigits(n / 10); // Recursive case
}

int main() {
    int num = 1234;
    cout << "Sum of digits of " << num << " is: " << sumOfDigits(num) << endl;
    return 0;
}
