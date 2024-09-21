#include <iostream>

using namespace std;

void permuteHelper(string str, int l, int r) {
    if (l == r) {
        cout << str << endl;
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(str[l], str[i]);
        permuteHelper(str, l + 1, r);  // Tail recursion
        swap(str[l], str[i]);  // Backtrack
    }
}

void permute(string str) {
    permuteHelper(str, 0, str.length() - 1);
}
