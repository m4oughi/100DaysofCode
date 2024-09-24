#include <iostream>

void printValue(const int& value) {
    std::cout << "Value: " << value << std::endl;
}

int main() {
    printValue(10);  // Temporary object

    return 0;
}
