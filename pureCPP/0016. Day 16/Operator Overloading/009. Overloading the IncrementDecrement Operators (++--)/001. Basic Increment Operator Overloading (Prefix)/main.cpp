#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v = 0) : value(v) {}

    // Overload prefix ++ operator
    Counter& operator++() {
        ++value;
        return *this;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Counter c(5);
    ++c;  // Calls prefix ++ operator
    cout << c.getValue() << endl;  // Output: 6
    return 0;
}
