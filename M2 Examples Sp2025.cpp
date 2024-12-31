// Multiple Recursion

#include <iostream>
#include <string>
using namespace std;

// Recursive function to generate all permutations
void permute(string str, int l, int r) {
    if (l == r) { // Base case
        cout << str << endl;
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(str[l], str[i]);             // Swap characters
        permute(str, l + 1, r);           // Recursive call
        swap(str[l], str[i]);             // Backtrack
    }
}

int main() {
    string s = "ABC";
    cout << "Permutations of " << s << ":\n";
    permute(s, 0, s.length() - 1);
    return 0;
}
