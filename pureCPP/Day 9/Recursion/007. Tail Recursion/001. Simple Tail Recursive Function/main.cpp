#include <iostream>

using namespace std;

void countdown(int n) {
    if (n == 0) 
        return;
    cout << n << " ";
    countdown(n - 1);  // Tail recursion because nothing happens after the recursive call
}
