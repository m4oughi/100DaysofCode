#include <iostream>
#include <utility>

int main() {
    std::pair<int, double> p(10, 3.14);

    std::cout << "First: " << std::get<0>(p) << "\n";
    std::cout << "Second: " << std::get<1>(p) << "\n";

    return 0;
}
