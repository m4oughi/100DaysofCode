#include <iostream>

const int& getConstValue() {
    static int value = 200;
    return value;
}

void modifyValue() {
    int& nonConstValue = const_cast<int&>(getConstValue()); // Removing constness
    nonConstValue = 300; // Modifying the value
}

int main() {
    modifyValue();
    std::cout << "Value: " << getConstValue() << std::endl; // Prints 300
}
