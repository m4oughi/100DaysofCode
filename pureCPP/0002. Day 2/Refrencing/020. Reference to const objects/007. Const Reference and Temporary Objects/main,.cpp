#include <iostream>

void display(const std::string& str) {  // Const reference to temporary object
    std::cout << "String: " << str << std::endl;
}

int main() {
    display("Hello, World!");  // Passing temporary object

    return 0;
}
