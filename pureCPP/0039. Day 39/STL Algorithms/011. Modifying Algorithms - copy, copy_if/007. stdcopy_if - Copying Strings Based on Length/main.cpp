#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main() {
    std::vector<std::string> source = {"apple", "dog", "cat", "banana", "pear"};
    std::vector<std::string> destination;

    std::copy_if(source.begin(), source.end(), std::back_inserter(destination), [](const std::string& str) {
        return str.size() > 3;
    });

    std::cout << "Strings with length > 3: ";
    for (const auto& str : destination) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
