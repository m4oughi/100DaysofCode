#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

int main() {
    std::vector<std::unique_ptr<int>> source;
    source.push_back(std::make_unique<int>(10));
    source.push_back(std::make_unique<int>(20));
    source.push_back(std::make_unique<int>(30));

    std::vector<std::unique_ptr<int>> destination(3);

    std::move(source.begin(), source.end(), destination.begin());

    std::cout << "Source vector: ";
    for (const auto& ptr : source) {
        std::cout << (ptr ? *ptr : 0) << " ";
    }
    std::cout << "\nDestination vector: ";
    for (const auto& ptr : destination) {
        std::cout << *ptr << " ";
    }
    std::cout << std::endl;

    return 0;
}
