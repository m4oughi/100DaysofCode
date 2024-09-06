#include <iostream>

void printValue(const int& value) {  // Parameter is a const reference
    std::cout << "Value: " << value << std::endl;
}

int main() {
    int num = 50;
    printValue(num);  // Passing lvalue

    printValue(60);   // Passing rvalue

    return 0;
}
