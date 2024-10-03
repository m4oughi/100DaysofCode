#include <iostream>
using namespace std;

class Multiplier {
    int factor;  // The factor by which to multiply
public:
    Multiplier(int f) : factor(f) {}  // Constructor to set the factor

    // Overloading the function call operator
    int operator()(int x) {
        return factor * x;  // Multiply input by factor
    }
};

int main() {
    Multiplier times2(2);  // Create a Multiplier object with factor 2
    cout << "2 times 5 = " << times2(5) << endl;  // Output: 2 times 5 = 10

    return 0;
}
