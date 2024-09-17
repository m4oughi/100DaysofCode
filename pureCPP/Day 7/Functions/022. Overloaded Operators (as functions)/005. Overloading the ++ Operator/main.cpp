#include <iostream>

class Counter {
public:
    int value;

    Counter(int v) : value(v) {}

    // Overload prefix ++ operator
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Overload postfix ++ operator
    Counter operator++(int) {
        Counter temp = *this;
        ++(*this);
        return temp;
    }

    void display() const {
        std::cout << "Counter: " << value << std::endl;
    }
};

int main() {
    Counter c(5);
    ++c;  // Calls prefix ++ operator
    c.display();  // Output: Counter: 6

    c++;  // Calls postfix ++ operator
    c.display();  // Output: Counter: 7

    return 0;
}
