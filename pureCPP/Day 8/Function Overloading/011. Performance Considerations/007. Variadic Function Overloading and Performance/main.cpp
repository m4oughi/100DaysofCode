#include <iostream>
using namespace std;

class Operations {
public:
    // Regular overloaded function
    void calculate(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }

    // Variadic template function
    template<typename... Args>
    void calculate(int a, Args... args) {
        cout << "Sum with variadic arguments: " << a + (args + ...) << endl;
    }
};

int main() {
    Operations ops;
    ops.calculate(2, 3);         // Calls the regular overloaded function
    ops.calculate(1, 2, 3, 4);   // Calls the variadic template function
    return 0;
}
