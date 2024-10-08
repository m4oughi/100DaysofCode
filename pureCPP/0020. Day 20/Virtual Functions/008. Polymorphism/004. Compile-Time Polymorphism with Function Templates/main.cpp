#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum of integers: " << add(3, 5) << endl;        // Template instantiation for int
    cout << "Sum of doubles: " << add(3.5, 5.5) << endl;    // Template instantiation for double

    return 0;
}
