#include <iostream>
using namespace std;

template <typename T>
auto add(T a, T b) -> decltype(a + b) {
    return a + b;
}

// Overloaded function for const char*
int add(const char* a, const char* b) {
    cout << "Overloaded for const char* - Concatenating strings" << endl;
    return 0;  // Placeholder, strings would need a different return type
}

int main() {
    cout << "Sum: " << add(5, 10) << endl;             // Calls template for int
    cout << "Sum: " << add(2.5, 3.5) << endl;          // Calls template for double
    add("Hello", "World");                             // Calls overloaded function for const char*
    return 0;
}
