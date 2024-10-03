#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}

    // Prefix increment with chaining support
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Postfix increment with chaining support
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
    
    ++(++c);  // Chained prefix increments
    cout << "After chained prefix ++: " << c.getValue() << endl;  // Output: 7

    c++++;
    cout << "After chained postfix ++: " << c.getValue() << endl;  // Output: 9

    return 0;
}
