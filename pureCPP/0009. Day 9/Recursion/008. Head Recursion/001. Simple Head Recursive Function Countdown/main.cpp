#include <iostream>

using namespace std;

void countdown(int n) {
    if (n == 0)
        return;
    countdown(n - 1);  // Head recursion: the recursive call comes first
    cout << n << " ";
}
