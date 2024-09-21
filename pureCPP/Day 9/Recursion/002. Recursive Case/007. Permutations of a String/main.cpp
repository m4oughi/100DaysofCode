#include <iostream>

using namespace std;

void permute(string str, int l, int r) {
    if (l == r) // Base Case: print permutation
        cout << str << endl;
    else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]); // Recursive Case: swap and permute
            permute(str, l + 1, r);
            swap(str[l], str[i]); // Backtrack
        }
    }
}
