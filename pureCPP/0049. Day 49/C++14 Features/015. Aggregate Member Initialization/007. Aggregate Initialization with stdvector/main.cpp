#include <iostream>
#include <vector>

struct Container {
    std::string name = "Box";
    std::vector<int> items = {1, 2, 3};  // Cannot be automatically aggregated
};

int main() {
    Container c1;  // Uses default values
    Container c2{"Crate", {10, 20, 30}};  // Explicit vector initialization

    std::cout << "Container 1: " << c1.name << " -> { ";
    for (int item : c1.items) std::cout << item << " ";
    std::cout << "}\n";

    std::cout << "Container 2: " << c2.name << " -> { ";
    for (int item : c2.items) std::cout << item << " ";
    std::cout << "}\n";

    return 0;
}
