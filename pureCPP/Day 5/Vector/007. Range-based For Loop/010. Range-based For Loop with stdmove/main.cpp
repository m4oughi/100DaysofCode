#include <iostream>
#include <vector>
#include <string>
#include <utility>

int main() {
    std::vector<std::string> source = {"apple", "banana", "cherry"};
    std::vector<std::string> destination;

    std::cout << "Moving elements to the destination vector:" << std::endl;
    for (std::string& fruit : source) {
        destination.push_back(std::move(fruit));
    }

    std::cout << "Source vector after move:" << std::endl;
    for (const std::string& fruit : source) {
        std::cout << (fruit.empty() ? "moved" : fruit) << " ";
    }
    std::cout << std::endl;

    std::cout << "Destination vector:" << std::endl;
    for (const std::string& fruit : destination) {
        std::cout << fruit << " ";
    }

    return 0;
}
