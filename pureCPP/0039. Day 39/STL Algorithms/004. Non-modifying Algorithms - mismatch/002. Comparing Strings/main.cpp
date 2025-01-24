#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str1 = "hello world";
    std::string str2 = "hello earth";

    auto result = std::mismatch(str1.begin(), str1.end(), str2.begin());

    if (result.first != str1.end()) {
        std::cout << "Mismatch found at position " << (result.first - str1.begin()) << ": "
                  << *result.first << " (str1) vs " << *result.second << " (str2)." << std::endl;
    } else {
        std::cout << "No mismatch found." << std::endl;
    }

    return 0;
}
