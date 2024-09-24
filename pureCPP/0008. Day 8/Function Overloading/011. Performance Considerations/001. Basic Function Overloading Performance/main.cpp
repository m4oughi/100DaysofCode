#include <iostream>
using namespace std;

class Operations {
public:
    // Overloaded function for integers
    void add(int a, int b) {
        cout << "Adding integers: " << a + b << endl;
    }

    // Overloaded function for doubles
    void add(double a, double b) {
        cout << "Adding doubles: " << a + b << endl;
    }
};

int main() {
    Operations ops;
    ops.add(2, 3);        // Integer addition
    ops.add(2.5, 3.5);    // Double addition
    return 0;
}
