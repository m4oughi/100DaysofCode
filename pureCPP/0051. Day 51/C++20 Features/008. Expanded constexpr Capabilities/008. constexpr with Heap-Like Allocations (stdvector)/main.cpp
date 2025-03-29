#include <iostream>
#include <vector>

constexpr std::vector<int> generateSquares(int n) {
    std::vector<int> v;
    for (int i = 1; i <= n; ++i) {
        v.push_back(i * i);
    }
    return v;
}

int main() {
    constexpr auto squares = generateSquares(5);
    std::cout << "Last square number: " << squares.back() << "\n";
}
