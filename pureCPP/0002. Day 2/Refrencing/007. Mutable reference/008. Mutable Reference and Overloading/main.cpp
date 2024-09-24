#include <iostream>

class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}

    Number& operator=(const Number &other) {
        value = other.value;  // Modify the left-hand side object
        return *this;
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Number n1(10), n2(20);
    n1 = n2;  // Assignment uses a mutable reference to modify n1
    std::cout << n1.getValue() << std::endl;  // Output: 20

    return 0;
}