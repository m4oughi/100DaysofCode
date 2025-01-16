#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, std::string, double> t(10, "Alice", 99.99);

    auto [id, name, score] = t;

    std::cout << "ID: " << id << ", Name: " << name << ", Score: " << score << "\n";

    return 0;
}
