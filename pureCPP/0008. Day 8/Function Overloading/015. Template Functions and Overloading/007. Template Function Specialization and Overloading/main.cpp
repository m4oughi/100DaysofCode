#include <iostream>
using namespace std;

template<typename T>
void show(T a) {
    cout << "Generic template: " << a << endl;
}

// Specialization for double
template<>
void show(double a) {
    cout << "Specialized template for double: " << a << endl;
}

int main() {
    show(10);         // Calls generic template
    show(3.14159);    // Calls specialized template for double

    return 0;
}
