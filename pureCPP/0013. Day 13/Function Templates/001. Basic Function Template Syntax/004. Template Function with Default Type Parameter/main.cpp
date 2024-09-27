#include <iostream>
using namespace std;

template <typename T = int>
T square(T a) {
    return a * a;
}

int main() {
    cout << "Square of integer: " << square(5) << endl;  // Uses default int
    cout << "Square of float: " << square(5.5) << endl;  // Explicit float
    return 0;
}
