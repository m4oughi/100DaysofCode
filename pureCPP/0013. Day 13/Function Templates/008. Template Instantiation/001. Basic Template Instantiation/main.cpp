#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Integer sum: " << add<int>(5, 10) << endl;     // Explicit instantiation
    cout << "Double sum: " << add<double>(5.5, 10.1) << endl;  // Explicit instantiation
    return 0;
}
