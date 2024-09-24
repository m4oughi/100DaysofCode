#include <iostream>
using namespace std;

class Operations {
public:
    // Inline addition for integers
    inline int add(int a, int b) {
        return a + b;
    }

    // Inline addition for doubles
    inline double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Operations ops;
    cout << "Sum (int): " << ops.add(3, 4) << endl;     // Calls the int version
    cout << "Sum (double): " << ops.add(3.2, 4.5) << endl; // Calls the double version
    return 0;
}
