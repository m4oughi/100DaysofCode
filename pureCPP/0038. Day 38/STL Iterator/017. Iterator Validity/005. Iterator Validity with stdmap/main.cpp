#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    auto it = data.begin(); // Points to the first element

    data.erase(it); // Removes the first element and invalidates the iterator

    std::cout << "Map after erasing: ";
    for (const auto& pair : data) {
        std::cout << "{" << pair.first << ", " << pair.second << "} ";
    }

    return 0;
}
