#include <iostream>

int& getStaticValue() {
    static int staticValue = 20;  // Static variable
    return staticValue;
}

int main() {
    int &ref = getStaticValue();  // Safe: ref refers to staticValue
    ref = 30;  // Modify the static variable
    std::cout << getStaticValue() << std::endl;  // Output: 30

    return 0;
}