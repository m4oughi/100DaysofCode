#include <iostream>
using namespace std;

// Generic template
template <typename T>
void display(T value) {
    cout << "Generic Template: " << value << endl;
}

// Specialization for int
template <>
void display<int>(int value) {
    cout << "Specialized Template for int: " << value << endl;
}

// Overloaded function for double
void display(double value) {
    cout << "Overloaded Function for double: " << value << endl;
}

int main() {
    display(5);         // Calls specialized template for int
    display(3.14);      // Calls overloaded function for double
    display('A');       // Calls generic template for char
    return 0;
}
