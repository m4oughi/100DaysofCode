#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> source = {"apple", "orange", "banana", "pear"};
    std::vector<std::string> destination;

    auto is_short = [](const std::string& s) { return s.size() <= 5; };
    std::move_if(source.begin(), source.end(), std::back_inserter(destination), is_short);

    std::cout << "Destination vector: ";
    for (const auto& str : destination) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
