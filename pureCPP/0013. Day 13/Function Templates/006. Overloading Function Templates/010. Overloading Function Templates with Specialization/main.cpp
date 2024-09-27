#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Generic Template: " << value << endl;
}

// Specialization for const char*
template <>
void display<const char*>(const char* value) {
    cout << "Specialized for const char*: " << value << endl;
}

// Overloaded template
template <typename T, typename U>
void display(T a, U b) {
    cout << "Overloaded Template: " << a << ", " << b << endl;
}

int main() {
    display(42);                // Calls generic template
    display("Hello");            // Calls specialized const char* template
    display(3.14, "World");      // Calls overloaded template for two types
    return 0;
}
