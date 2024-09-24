#include <iostream>
#include <string>

void modifyString(std::string str) {
    str += " World!";
}

int main() {
    std::string greeting = "Hello";
    modifyString(greeting);
    std::cout << "Greeting: " << greeting << std::endl;  // Original string remains unchanged
    return 0;
}
