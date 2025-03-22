#include <iostream>

int getValue() {
    return 10;
}

int main() {
    if (int val = getValue(); val % 2 == 0) {
        std::cout << "Even number: " << val << '\n';
    } else {
        std::cout << "Odd number: " << val << '\n';
    }
    return 0;
}
