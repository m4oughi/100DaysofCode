#include <iostream>
using namespace std;

class MathOperations {
public:
    // Overloaded function marked as inline
    inline int multiply(int a, int b) {
        return a * b;
    }

    // Overloaded function with more complex logic
    int multiply(int a, int b, int c) {
        return a * b * c;
    }
};

int main() {
    MathOperations mathOps;

    cout << "Result: " << mathOps.multiply(3, 4) << endl;    // Inline version
    cout << "Result: " << mathOps.multiply(3, 4, 5) << endl; // Regular function call
    return 0;
}
