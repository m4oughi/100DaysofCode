#include <iostream>
using namespace std;

template <typename T>
void print(T value, int precision = 2) {
    cout.precision(precision);
    cout << fixed << "Template: " << value << endl;
}

// Overloading with specific types and default parameters
void print(double value, int precision = 5) {
    cout.precision(precision);
    cout << fixed << "Overloaded for double: " << value << endl;
}

int main() {
    print(3.14159);    // Calls overloaded double version with 5 precision
    print(100);        // Calls template with default precision 2
    print(3.14159, 3); // Calls template version with custom precision 3
    return 0;
}
