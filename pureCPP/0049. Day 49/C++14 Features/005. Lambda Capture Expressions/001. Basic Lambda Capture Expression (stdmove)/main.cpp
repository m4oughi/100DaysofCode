#include <iostream>
#include <string>

int main() {
    std::string name = "John";

    auto lambda = [moved_name = std::move(name)]() {
        std::cout << "Captured Name: " << moved_name << std::endl;
    };

    lambda(); // Output: Captured Name: John
    std::cout << "Original Name: " << name << std::endl; // name is now empty

    return 0;
}
