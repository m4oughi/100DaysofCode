#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Template: " << value << endl;
}

// Non-template function overload for char
void display(char value) {
    cout << "Overloaded for char: " << value << endl;
}

int main() {
    display(100);      // Calls template function
    display('A');      // Calls overloaded function for char
    display(3.14);     // Calls template function
    return 0;
}
