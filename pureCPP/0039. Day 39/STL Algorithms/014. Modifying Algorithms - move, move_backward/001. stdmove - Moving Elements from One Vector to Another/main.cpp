#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> source = {"alpha", "beta", "gamma"};
    std::vector<std::string> destination(3);

    std::move(source.begin(), source.end(), destination.begin());

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
