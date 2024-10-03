#include <iostream>
using namespace std;

class Adder {
public:
    // Overloading the function call operator to add two numbers
    int operator()(int a, int b) {
        return a + b;  // Return the sum of a and b
    }
};

int main() {
    Adder add;  // Create an Adder object
    cout << "Sum of 3 and 4 = " << add(3, 4) << endl;  // Output: Sum of 3 and 4 = 7

    return 0;
}
