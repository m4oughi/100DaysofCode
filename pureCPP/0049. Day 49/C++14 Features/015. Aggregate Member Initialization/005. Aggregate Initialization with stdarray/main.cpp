#include <iostream>
#include <array>

struct Data {
    std::string name = "Default";
    std::array<int, 3> values = {1, 2, 3};  // Default array values
};

int main() {
    Data d1{};  // Uses default values
    Data d2{"Custom", {10, 20, 30}};  // Overrides array

    std::cout << "Data 1: " << d1.name << " -> " 
              << d1.values[0] << ", " << d1.values[1] << ", " << d1.values[2] << "\n";

    std::cout << "Data 2: " << d2.name << " -> " 
              << d2.values[0] << ", " << d2.values[1] << ", " << d2.values[2] << "\n";

    return 0;
}
