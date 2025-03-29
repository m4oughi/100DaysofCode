#include <iostream>
#include <compare>

struct Engine {
    int horsepower;
    auto operator<=>(const Engine&) const = default;
};

struct Vehicle {
    std::string brand;
    Engine engine;

    auto operator<=>(const Vehicle&) const = default;
};

int main() {
    Vehicle v1{"Tesla", {400}}, v2{"Ford", {350}};

    std::cout << std::boolalpha;
    std::cout << (v1 > v2) << "\n";  // true (400 HP > 350 HP)

    return 0;
}
