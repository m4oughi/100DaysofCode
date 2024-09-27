#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(5, 10) << endl;       // Explicitly specifying T as int
    cout << add<double>(3.5, 1.5) << endl; // Explicitly specifying T as double
    return 0;
}
