#include <iostream>
using namespace std;

// Generic template
template <typename T>
void print(T value) {
    cout << "Single Value: " << value << endl;
}

// Overloading with variadic templates
template <typename T, typename... Args>
void print(T first, Args... args) {
    cout << "Variadic Template: " << first << ", ";
    print(args...);
}

int main() {
    print(1);                 // Calls single-value template
    print(1, 2.5, "Hello");    // Calls variadic template
    return 0;
}
