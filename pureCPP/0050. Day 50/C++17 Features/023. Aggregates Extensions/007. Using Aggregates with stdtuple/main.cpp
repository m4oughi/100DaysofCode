#include <iostream>
#include <tuple>

struct Data {
    int x;
    double y;
    std::string z;
};

int main() {
    Data d1{1, 2.5, "Hello"}; // Aggregate initialization
    auto [a, b, c] = d1; // Structured bindings

    std::cout << "x: " << a << ", y: " << b << ", z: " << c << "\n";
    return 0;
}
