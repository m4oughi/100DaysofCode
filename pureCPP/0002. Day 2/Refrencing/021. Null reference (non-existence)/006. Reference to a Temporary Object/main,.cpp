#include <iostream>

const int& getTemporaryValue() {
    return 10;  // Return reference to temporary object
}

int main() {
    const int& ref = getTemporaryValue();  // Legal but risky
    std::cout << "Value: " << ref << std::endl;

    return 0;
}
