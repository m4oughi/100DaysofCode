#include <iostream>
#include <utility>

int main() {
    std::string str1 = "Hello";
    std::string str2 = std::move(str1); // Moves ownership

    std::cout << "str1: " << str1 << std::endl; // Undefined state (likely empty)
    std::cout << "str2: " << str2 << std::endl;

    return 0;
}
