#include <iostream>
#include <utility>

int main() {
    std::string name = "Alice";
    std::string old_name = std::exchange(name, ""); // Resets name to an empty string

    std::cout << "New name: \"" << name << "\"\n";
    std::cout << "Old name: \"" << old_name << "\"\n";

    return 0;
}
