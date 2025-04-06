#include <iostream>
#include <array>

consteval std::array<std::array<int, 2>, 2> multiplyMatrix(
    const std::array<std::array<int, 2>, 2>& a,
    const std::array<std::array<int, 2>, 2>& b) {
    
    return {{
        {a[0][0] * b[0][0] + a[0][1] * b[1][0], a[0][0] * b[0][1] + a[0][1] * b[1][1]},
        {a[1][0] * b[0][0] + a[1][1] * b[1][0], a[1][0] * b[0][1] + a[1][1] * b[1][1]}
    }};
}

int main() {
    constexpr std::array<std::array<int, 2>, 2> mat1 = {{{1, 2}, {3, 4}}};
    constexpr std::array<std::array<int, 2>, 2> mat2 = {{{5, 6}, {7, 8}}};
    constexpr auto result = multiplyMatrix(mat1, mat2);

    std::cout << "Matrix Multiplication Result: " << result[0][0] << " " << result[0][1] << '\n';
    return 0;
}
