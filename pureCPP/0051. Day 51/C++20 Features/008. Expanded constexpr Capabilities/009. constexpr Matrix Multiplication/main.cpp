#include <iostream>
#include <array>

constexpr std::array<std::array<int, 2>, 2> multiplyMatrices(
    const std::array<std::array<int, 2>, 2>& A,
    const std::array<std::array<int, 2>, 2>& B) {

    std::array<std::array<int, 2>, 2> result{};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < 2; ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

int main() {
    constexpr std::array<std::array<int, 2>, 2> A{{{1, 2}, {3, 4}}};
    constexpr std::array<std::array<int, 2>, 2> B{{{5, 6}, {7, 8}}};

    constexpr auto result = multiplyMatrices(A, B);
    std::cout << "Matrix multiplication result[0][0]: " << result[0][0] << "\n";
}
