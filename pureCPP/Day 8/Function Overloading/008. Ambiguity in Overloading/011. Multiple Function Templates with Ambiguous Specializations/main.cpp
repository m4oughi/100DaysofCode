#include <iostream>
using namespace std;

template <typename T>
void compute(T a) {
    cout << "General template: " << a << endl;
}

template <>
void compute<int>(int a) {
    cout << "Specialized template for int: " << a << endl;
}

template <>
void compute<float>(float a) {
    cout << "Specialized template for float: " << a << endl;
}

int main() {
    compute(5);    // Ambiguous: Could match either general or int specialization
    return 0;
}
