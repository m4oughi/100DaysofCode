#include <iostream>
using namespace std;

template <typename T>
void printPointer(T* ptr) {
    cout << "Pointer points to: " << *ptr << endl;
}

int main() {
    int num = 42;
    double val = 3.14;
    
    printPointer(&num);  // Deduces T as int
    printPointer(&val);  // Deduces T as double
    return 0;
}
