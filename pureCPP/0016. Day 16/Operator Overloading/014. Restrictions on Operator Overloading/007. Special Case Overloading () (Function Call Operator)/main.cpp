#include <iostream>
using namespace std;

class Adder {
    int value;
public:
    Adder(int v) : value(v) {}

    // Overload the () operator to behave like a function
    int operator()(int addValue) {
        return value + addValue;
    }
};

int main() {
    Adder add5(5);
    cout << "Adding 5 and 10: " << add5(10) << endl;  // Output: 15
    return 0;
}
