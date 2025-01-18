#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> data = {{1, "One"}, {2, "Two"}, {3, "Three"}};
    auto it = data.begin(); // Points to the first element

    data.erase(1); // Removes the element with key 1 and invalidates the iterator pointing to it

    std::cout << "Map after erase: ";
    for (const auto& pair : data) {
        std::cout << "{" << pair.first << ", " << pair.second << "} ";
    }

    return 0;
}
