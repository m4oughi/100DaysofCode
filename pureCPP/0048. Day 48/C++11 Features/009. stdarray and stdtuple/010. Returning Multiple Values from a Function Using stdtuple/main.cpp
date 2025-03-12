#include <iostream>
#include <tuple>

std::tuple<int, double, std::string> getData() {
    return std::make_tuple(42, 3.14, "Hello");
}

int main() {
    auto [num, pi, text] = getData(); // Structured binding

    std::cout << "Number: " << num << "\n";
    std::cout << "Pi: " << pi << "\n";
    std::cout << "Text: " << text << "\n";

    return 0;
}
