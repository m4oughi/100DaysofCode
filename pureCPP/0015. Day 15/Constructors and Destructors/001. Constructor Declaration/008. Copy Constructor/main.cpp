#include <iostream>

class Number {
private:
    int value;
public:
    Number(int v) : value(v) {
        std::cout << "Number created with value " << value << std::endl;
    }

    // Copy constructor
    Number(const Number& num) : value(num.value) {
        std::cout << "Copy constructor called. Value: " << value << std::endl;
    }
};

int main() {
    Number num1(10);
    Number num2 = num1;  // Copy constructor is called
    return 0;
}
