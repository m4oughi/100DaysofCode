#include <iostream>

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    Number& operator=(const Number &other) {
        if (this != &other) {
            value = other.value;  // Copies the value, but doesn't modify the source
        }
        return *this;
    }

    void print() const {
        std::cout << value << std::endl;
    }
};

int main() {
    Number n1(50), n2(100);
    n1 = n2;  // Assignment using a const reference
    n1.print();  // Output: 100

    return 0;
}