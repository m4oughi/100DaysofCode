#include <iostream>
using namespace std;

template <typename T = int>
void add(T a, T b) {
    cout << "Sum (Template): " << a + b << endl;
}

// Overloaded version for different types
void add(double a, double b) {
    cout << "Sum (Overloaded for double): " << a + b << endl;
}

int main() {
    add(10, 20);         // Uses default int template
    add(5.5, 4.5);       // Uses overloaded double function
    return 0;
}
