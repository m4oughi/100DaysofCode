#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> data = {{"apple", 5}, {"banana", 10}};
    auto lambda = [&]() {
        for (auto& [key, value] : data) {
            value += 1; // Modify the original data by reference
        }
    };

    lambda();
    for (const auto& [key, value] : data) {
        std::cout << key << ": " << value << std::endl; // Outputs: apple: 6, banana: 11
    }
    return 0;
}
