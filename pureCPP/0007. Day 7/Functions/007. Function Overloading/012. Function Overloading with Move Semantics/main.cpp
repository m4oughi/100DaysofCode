#include <iostream>
#include <string>

void processString(const std::string& str) {
    std::cout << "Lvalue reference: " << str << std::endl;
}

void processString(std::string&& str) {
    std::cout << "Rvalue reference: " << str << std::endl;
}

int main() {
    std::string name = "John";
    processString(name);             // Calls lvalue version
    processString("Temporary");      // Calls rvalue version
    return 0;
}
