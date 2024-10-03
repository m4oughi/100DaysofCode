#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}

    // Overload postfix ++ operator
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Counter c(5);
    Counter old = c++;  // Calls postfix ++ operator
    cout << "Old value: " << old.getValue() << endl;  // Output: 5
    cout << "New value: " << c.getValue() << endl;  // Output: 6
    return 0;
}
