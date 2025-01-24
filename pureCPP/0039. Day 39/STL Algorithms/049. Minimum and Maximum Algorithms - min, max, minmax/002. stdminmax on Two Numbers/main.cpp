#include <iostream>
#include <algorithm>

int main() {
    int a = 50, b = 30;

    auto result = std::minmax(a, b);
    std::cout << "Minimum: " << result.first << "\n";
    std::cout << "Maximum: " << result.second << "\n";

    return 0;
}
