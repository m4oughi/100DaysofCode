#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, std::tuple<std::string, double>> t(1, {"Alice", 90.5});

    std::cout << "ID: " << std::get<0>(t) << "\n";
    std::cout << "Name: " << std::get<0>(std::get<1>(t)) << "\n";
    std::cout << "Score: " << std::get<1>(std::get<1>(t)) << "\n";

    return 0;
}
