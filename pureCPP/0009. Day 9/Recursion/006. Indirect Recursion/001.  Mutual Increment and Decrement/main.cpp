#include <iostream>

using namespace std;

void functionA(int n);
void functionB(int n);

void functionA(int n) {
    if (n > 0) {
        cout << n << " ";  // Print the current value of n
        functionB(n - 1);  // Call functionB with n-1
    }
}

void functionB(int n) {
    if (n > 0) {
        cout << n << " ";  // Print the current value of n
        functionA(n - 1);  // Call functionA with n-1
    }
}
