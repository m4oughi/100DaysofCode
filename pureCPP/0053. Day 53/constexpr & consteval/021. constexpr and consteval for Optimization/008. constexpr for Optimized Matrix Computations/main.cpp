#include <iostream>
#include <array>

constexpr std::array<std::array<int, 2>, 2> multiplyMatrix(
    const std::array<std::array<int, 2>, 2>& a,
    const std::array<std::array<int, 2>, 2>& b) 
{
    return {{
        { a[0][0] * b[0][0] + a[0][1] * b[1][0], a[0][0] * b[0][1] + a[0][1] * b[1][1] },
        { a[1][0] * b[0][0] + a[1][1] * b[1][0], a[1][0] * b[0][1] + a[1][1] * b[1][1] }
    }};
}

int main() {
    constexpr std::array<std::array<int, 2>, 2> matA = {{{1, 2}, {3, 4}}};
    constexpr std::array<std::array<int, 2>, 2> matB = {{{2, 0}, {1, 2}}};

    constexpr auto result = multiplyMatrix(matA, matB);

    std::cout << "Matrix Result:\n";
    for (const auto& row : result) {
        for (int val : row) std::cout << val << " ";
        std::cout << '\n';
    }
}
