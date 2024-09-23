#include <iostream>

int main() {
    auto compare = [](auto a, auto b) {
        if (a > b) return "First is greater";
        else if (a < b) return "Second is greater";
        else return "They are equal";
    };

    std::cout << compare(10, 5) << std::endl;         // Outputs: First is greater
    std::cout << compare(2.5, 4.5) << std::endl;      // Outputs: Second is greater
    std::cout << compare(3, 3) << std::endl;          // Outputs: They are equal
    return 0;
}
