#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}

    // Prefix increment
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    // Prefix decrement
    Counter& operator--() {
        --value;
        return *this;
    }

    // Postfix decrement
    Counter operator--(int) {
        Counter temp = *this;
        --value;
        return temp;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Counter c(10);

    cout << "Initial value: " << c.getValue() << endl;  // Output: 10

    ++c;  // Prefix increment
    cout << "After prefix ++: " << c.getValue() << endl;  // Output: 11

    c++;  // Postfix increment
    cout << "After postfix ++: " << c.getValue() << endl;  // Output: 12

    --c;  // Prefix decrement
    cout << "After prefix --: " << c.getValue() << endl;  // Output: 11

    c--;  // Postfix decrement
    cout << "After postfix --: " << c.getValue() << endl;  // Output: 10

    return 0;
}
