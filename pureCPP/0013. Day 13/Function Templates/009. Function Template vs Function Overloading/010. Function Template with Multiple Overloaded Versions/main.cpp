#include <iostream>
using namespace std;

// Template function
template <typename T>
void compare(T a, T b) {
    if (a > b)
        cout << "Template: " << a << " is greater than " << b << endl;
    else
        cout << "Template: " << b << " is greater than or equal to " << a << endl;
}

// Overloaded function for int
void compare(int a, int b) {
    cout << "Overloaded for int: Comparing " << a << " and " << b << endl;
}

int main() {
    compare(5, 10);           // Calls overloaded function for int
    compare(3.5, 2.2);        // Calls template function for double
    compare('a', 'z');        // Calls template function for char
    return 0;
}
