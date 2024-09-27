#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Template: Value = " << value << endl;
}

// Overloaded function for specific data type (int)
void display(int value) {
    cout << "Overloaded for int: Value = " << value << endl;
}

int main() {
    display(42);       // Calls overloaded int function
    display(3.14);     // Calls template function
    display("Hello");  // Calls template function
    return 0;
}
