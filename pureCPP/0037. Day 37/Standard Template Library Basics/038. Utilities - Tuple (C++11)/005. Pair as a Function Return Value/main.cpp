#include <iostream>
#include <utility>

std::pair<int, int> getMinMax(int a, int b) {
    return {std::min(a, b), std::max(a, b)};
}

int main() {
    auto result = getMinMax(10, 20);
    std::cout << "Min: " << result.first << ", Max: " << result.second << "\n";
    return 0;
}
