#include <iostream>
#include <string>

void appendText(std::string& str) {
    str += " World!";
}

int main() {
    std::string greeting = "Hello";
    appendText(greeting);
    std::cout << "Greeting: " << greeting << std::endl;  // Original string is modified
    return 0;
}
