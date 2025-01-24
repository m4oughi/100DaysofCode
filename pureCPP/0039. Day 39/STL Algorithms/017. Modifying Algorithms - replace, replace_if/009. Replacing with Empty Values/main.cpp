#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> vec = {"apple", "banana", "cherry", "apple"};

    std::replace(vec.begin(), vec.end(), "apple", "");

    std::cout << "After replacing with empty string: ";
    for (const auto& str : vec) {
        std::cout << "\"" << str << "\" ";
    }
    std::cout << std::endl;

    return 0;
}
