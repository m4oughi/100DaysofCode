#include <iostream>
#include <string>
#include <utility>

int main() {
    std::string str1 = "Hello";
    std::string str2 = std::move(str1);

    std::cout << "After move:\n";
    std::cout << "str1: " << str1 << "\n"; // str1 is now empty
    std::cout << "str2: " << str2 << "\n";

    return 0;
}
