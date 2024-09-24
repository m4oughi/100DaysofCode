#include <iostream>

int main() {
    // Generic lambda with parameter packs
    auto printAll = [](auto... args) {
        (std::cout << ... << args) << std::endl;
    };

    printAll(1, " and ", 2, " and ", 3); // Outputs: 1 and 2 and 3
    return 0;
}
