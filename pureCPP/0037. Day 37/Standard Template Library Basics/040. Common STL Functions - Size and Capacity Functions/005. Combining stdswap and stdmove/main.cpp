#include <iostream>
#include <string>
#include <utility>

int main() {
    std::string str1 = "Apple";
    std::string str2 = "Orange";

    std::cout << "Before swap:\n";
    std::cout << "str1: " << str1 << ", str2: " << str2 << "\n";

    std::swap(str1, std::move(str2));

    std::cout << "After swap:\n";
    std::cout << "str1: " << str1 << ", str2: " << str2 << "\n";

    return 0;
}
