#include <iostream>
using namespace std;

namespace MathOperations {
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
}

int main() {
    cout << "Sum (int): " << MathOperations::add(3, 4) << endl;     // Calls int version
    cout << "Sum (double): " << MathOperations::add(3.5, 4.5) << endl; // Calls double version
    return 0;
}
