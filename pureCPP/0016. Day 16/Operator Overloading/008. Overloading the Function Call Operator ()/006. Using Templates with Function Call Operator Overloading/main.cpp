#include <iostream>
using namespace std;

template <typename T>
class GenericMultiplier {
    T factor;  // The factor to multiply by
public:
    GenericMultiplier(T f) : factor(f) {}  // Constructor to set the factor

    // Overloading the function call operator
    T operator()(T x) {
        return factor * x;  // Multiply the input by the factor
    }
};

int main() {
    GenericMultiplier<int> intMultiplier(3);  // Create a multiplier for integers
    cout << "3 times 5 = " << intMultiplier(5) << endl;  // Output: 3 times 5 = 15

    GenericMultiplier<double> doubleMultiplier(2.5);  // Create a multiplier for doubles
    cout << "2.5 times 4.0 = " << doubleMultiplier(4.0) << endl;  // Output: 2.5 times 4.0 = 10

    return 0;
}
