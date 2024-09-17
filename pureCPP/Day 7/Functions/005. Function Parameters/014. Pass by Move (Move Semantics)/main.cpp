#include <iostream>
#include <utility>
#include <string>

// Function declaration with move semantics
void displayString(std::string&& str);

int main() {
    std::string myStr = "Hello, World!";
    displayString(std::move(myStr));  // Function call with move semantics
    std::cout << "String after move: " << myStr << std::endl;  // myStr is empty now
    return 0;
}

// Function definition with move semantics
void displayString(std::string&& str) {
    std::cout << "Moved string: " << str << std::endl;
}
