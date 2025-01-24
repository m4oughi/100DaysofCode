#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> source = {"red", "green", "blue"};
    std::vector<std::string> destination(3);

    std::move_backward(source.begin(), source.end(), destination.end());

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
