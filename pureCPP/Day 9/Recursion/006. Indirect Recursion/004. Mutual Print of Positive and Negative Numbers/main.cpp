#include <iostream>

using namespace std;

void printPositive(int n);
void printNegative(int n);

void printPositive(int n) {
    if (n > 0) {
        cout << n << " ";
        printNegative(-n);  // Calls printNegative with the negative version of n
    }
}

void printNegative(int n) {
    if (n < 0) {
        cout << n << " ";
        printPositive(-n - 1);  // Calls printPositive with positive version of n-1
    }
}
