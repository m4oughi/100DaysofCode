#include <iostream>

void displayValue(const int& value) {
    // value += 10;  // Error: cannot modify a const reference
    std::cout << "Value: " << value << std::endl;
}

int main() {
    int num = 70;
    displayValue(num);  // Pass by const reference

    return 0;
}
