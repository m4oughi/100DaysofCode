#include <iostream>
using namespace std;

class Operations {
public:
    // Inline factorial calculation using recursion (base case)
    inline int factorial(int n) {
        if (n <= 1)
            return 1;
        return n * factorial(n - 1); // Recursive call
    }

    // Overloaded inline function for different base case (advanced)
    inline int factorial(int n, int base) {
        if (n <= base)
            return base;
        return n * factorial(n - 1, base); // Recursive call
    }
};

int main() {
    Operations ops;
    cout << "Factorial (5!): " << ops.factorial(5) << endl;       // Regular factorial
    cout << "Factorial (5!, base=2): " << ops.factorial(5, 2) << endl;  // Factorial with custom base
    return 0;
}
