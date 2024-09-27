#include <iostream>
using namespace std;

// Overloaded functions
void display(int value) {
    cout << "Integer: " << value << endl;
}

void display(double value) {
    cout << "Double: " << value << endl;
}

// Template function
template <typename T>
void display(T value) {
    cout << "Template Value: " << value << endl;
}

int main() {
    display(10);      // Calls overloaded int version (preferred)
    display(3.14);    // Calls overloaded double version (preferred)
    display("Hello"); // Calls template function (no matching overload)
    return 0;
}
