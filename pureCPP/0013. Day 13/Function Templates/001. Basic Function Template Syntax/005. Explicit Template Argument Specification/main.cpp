#include <iostream>
using namespace std;

template <typename T>
T subtract(T a, T b) {
    return a - b;
}

int main() {
    cout << "Subtracting integers: " << subtract<int>(15, 5) << endl;  // Explicit int
    cout << "Subtracting floats: " << subtract<float>(15.5, 5.2) << endl;  // Explicit float
    return 0;
}
