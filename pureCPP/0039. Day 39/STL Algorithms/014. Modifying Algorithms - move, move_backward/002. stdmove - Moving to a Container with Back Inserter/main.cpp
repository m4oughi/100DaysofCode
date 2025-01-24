#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> source = {"apple", "banana", "cherry"};
    std::vector<std::string> destination;

    std::move(source.begin(), source.end(), std::back_inserter(destination));

    std::cout << "Source vector: ";
    for (const auto& str : source) {
        std::cout << str << " ";
    }
    std::cout << "\nDestination vector: ";
    for (const auto& str : destination) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
