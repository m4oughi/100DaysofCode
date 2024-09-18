#include <iostream>
using namespace std;

namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
}

int main() {
    using namespace MathOperations;

    // Directly using the functions without namespace qualifier
    cout << "Sum (int): " << add(2, 3) << endl;      // Calls int version
    cout << "Sum (double): " << add(2.5, 3.5) << endl;  // Calls double version

    return 0;
}
