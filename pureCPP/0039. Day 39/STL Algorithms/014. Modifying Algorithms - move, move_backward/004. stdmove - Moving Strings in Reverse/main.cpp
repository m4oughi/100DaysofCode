#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> source = {"one", "two", "three"};
    std::vector<std::string> destination(3);

    std::move(source.rbegin(), source.rend(), destination.begin());

    std::cout << "Destination vector: ";
    for (const auto& str : destination) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
