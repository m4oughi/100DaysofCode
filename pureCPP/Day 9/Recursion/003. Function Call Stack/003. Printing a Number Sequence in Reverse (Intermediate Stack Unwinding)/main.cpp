#include <iostream>

using namespace std;

void printReverse(int n) {
    if (n == 0) // Base Case
        return;
    printReverse(n - 1); // Recursive Case: reduce n
    cout << n << " "; // Stack unwinds and prints after recursion
}
