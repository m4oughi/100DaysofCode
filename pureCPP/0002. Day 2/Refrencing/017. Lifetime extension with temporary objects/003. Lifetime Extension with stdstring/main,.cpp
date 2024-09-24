#include <iostream>
#include <string>

void printString(const std::string& str) {
    std::cout << "String: " << str << std::endl;
}

int main() {
    printString("Hello, World!");  // Temporary std::string

    return 0;
}
