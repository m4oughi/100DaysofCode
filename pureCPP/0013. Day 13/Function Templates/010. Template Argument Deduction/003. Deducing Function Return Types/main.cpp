#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum (int): " << add(5, 10) << endl;       // Deduces T as int
    cout << "Sum (double): " << add(3.5, 1.5) << endl; // Deduces T as double
    return 0;
}
