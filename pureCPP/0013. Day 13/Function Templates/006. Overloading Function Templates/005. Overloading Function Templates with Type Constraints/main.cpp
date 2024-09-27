#include <iostream>
using namespace std;

template <typename T>
void sum(T a, T b) {
    cout << "Sum (Generic Template): " << a + b << endl;
}

// Overloaded for strings
void sum(const string& a, const string& b) {
    cout << "Sum (String Overload): " << a + b << endl;
}

int main() {
    sum(10, 20);           // Calls generic template
    sum(string("Hello, "), string("World!"));  // Calls string-specific overload
    return 0;
}
