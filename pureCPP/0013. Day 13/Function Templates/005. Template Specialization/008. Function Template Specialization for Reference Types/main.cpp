#include <iostream>
using namespace std;

template <typename T>
void printValue(const T& value) {
    cout << "Generic value: " << value << endl;
}

// Specialization for reference types
template <>
void printValue<int&>(int& value) {
    cout << "Specialized for int reference: " << value << endl;
}

int main() {
    int x = 42;
    printValue(100);  // Generic version
    printValue(x);    // Specialized version for int reference

    return 0;
}
