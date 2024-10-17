#include <iostream>
#include <string>
#include <utility>

int main() {
    std::string str1 = "Hello, World!";
    std::string str2 = std::move(str1);  // Transfers the content of str1 to str2

    std::cout << "str1 after move: " << str1 << std::endl;  // str1 is now empty
    std::cout << "str2: " << str2 << std::endl;
}
