#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str = "hello world";

    auto it = std::find(str.begin(), str.end(), 'o');

    if (it != str.end()) {
        std::cout << "Character 'o' found at index: " << (it - str.begin()) << std::endl;
    } else {
        std::cout << "Character not found." << std::endl;
    }

    return 0;
}
