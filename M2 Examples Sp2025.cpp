#include <iostream>
using namespace std;

// Recursive function for Tower of Hanoi
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) { // Base case
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    towerOfHanoi(n - 1, from, aux, to); // Recursive case
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    towerOfHanoi(n - 1, aux, to, from); // Recursive case
}

int main() {
    int disks = 3;
    towerOfHanoi(disks, 'A', 'C', 'B');
    return 0;
}
