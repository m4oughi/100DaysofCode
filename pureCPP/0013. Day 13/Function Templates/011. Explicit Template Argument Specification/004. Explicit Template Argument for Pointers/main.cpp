#include <iostream>
using namespace std;

template <typename T>
void printPointer(T* ptr) {
    cout << "Pointer points to: " << *ptr << endl;
}

int main() {
    int num = 42;
    double val = 3.14;

    printPointer<int>(&num);  // Explicitly specifying T as int for pointer
    printPointer<double>(&val);  // Explicitly specifying T as double for pointer
    return 0;
}
