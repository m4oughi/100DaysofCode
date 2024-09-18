#include <iostream>
using namespace std;

namespace MathOperations {
    inline int square(int a) {
        return a * a;
    }

    inline double square(double a) {
        return a * a;
    }
}

int main() {
    cout << "Square (int): " << MathOperations::square(3) << endl;    // Calls int version
    cout << "Square (double): " << MathOperations::square(3.5) << endl; // Calls double version
    return 0;
}
