#include <iostream>

template<typename T>
void doubleValue(T& value) {
    value *= 2;
}

int main() {
    int num = 5;
    doubleValue(num);
    std::cout << "Doubled num: " << num << std::endl;  // Original num is doubled

    double d = 5.5;
    doubleValue(d);
    std::cout << "Doubled d: " << d << std::endl;  // Original d is doubled

    return 0;
}
