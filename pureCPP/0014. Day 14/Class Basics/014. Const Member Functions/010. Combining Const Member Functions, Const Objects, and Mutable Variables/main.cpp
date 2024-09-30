#include <iostream>
using namespace std;

class AdvancedCalculator {
private:
    int value;
    mutable int computationCount;  // Mutable variable

public:
    AdvancedCalculator(int initialValue = 0) : value(initialValue), computationCount(0) {}

    int getValue() const {
        computationCount++;
        return value;
    }

    void add(int num) {
        value += num;
    }

    int getComputationCount() const {
        return computationCount;
    }
};

int main() {
    const AdvancedCalculator calc(10);
    cout << "Value: " << calc.getValue() << endl;
    cout << "Computation Count: " << calc.getComputationCount() << endl;

    // calc.add(5);  // Error: cannot call non-const method on const object

    return 0;
}
