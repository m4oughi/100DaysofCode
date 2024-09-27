#include <iostream>
using namespace std;

template <typename T1 = int, typename T2 = T1>
void printValues(T1 a, T2 b) {
    cout << "T1: " << a << ", T2: " << b << endl;
}

int main() {
    printValues(5);          // T1 defaults to int, T2 follows T1 (int)
    printValues(3.14, 7);    // T1 is double, T2 is int
    return 0;
}
