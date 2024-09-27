#include <iostream>
using namespace std;

template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

// Overloaded function for specific types
double getMax(double a, double b) {
    cout << "Overloaded function for double." << endl;
    return (a > b) ? a : b;
}

int main() {
    cout << "Max int: " << getMax(10, 20) << endl;        // Uses template instantiation
    cout << "Max double: " << getMax(5.5, 3.5) << endl;   // Uses overloaded function
    return 0;
}
