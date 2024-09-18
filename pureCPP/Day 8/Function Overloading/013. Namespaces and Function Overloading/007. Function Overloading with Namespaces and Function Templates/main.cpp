#include <iostream>
using namespace std;

namespace MathOperations {
    // Templated function to add two values of any type
    template <typename T>
    T add(T a, T b) {
        return a + b;
    }

    // Overloaded function for adding three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
}

int main() {
    cout << "Sum (int, template): " << MathOperations::add(3, 4) << endl;    // Uses template version
    cout << "Sum (double, template): " << MathOperations::add(3.5, 4.5) << endl;  // Uses template version
    cout << "Sum (int, three arguments): " << MathOperations::add(3, 4, 5) << endl; // Calls overloaded version
    return 0;
}
