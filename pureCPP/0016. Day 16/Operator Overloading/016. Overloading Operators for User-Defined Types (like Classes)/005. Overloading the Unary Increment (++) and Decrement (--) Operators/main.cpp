#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}

    // Overloading the prefix ++ operator
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Overloading the postfix ++ operator
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    // Overloading the prefix -- operator
    Counter& operator--() {
        --value;
        return *this;
    }

    // Overloading the postfix -- operator
    Counter operator--(int) {
        Counter temp = *this;
        --value;
        return temp;
    }

    void display() const {
        cout << "Counter: " << value << endl;
    }
};

int main() {
    Counter c(5);

    ++c;  // Prefix increment
    c.display();  // Output: Counter: 6

    c++;  // Postfix increment
    c.display();  // Output: Counter: 7

    --c;  // Prefix decrement
    c.display();  // Output: Counter: 6

    c--;  // Postfix decrement
    c.display();  // Output: Counter: 5

    return 0;
}
