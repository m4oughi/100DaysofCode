#include <iostream>
#include <array>

class Matrix2x2 {
public:
    constexpr Matrix2x2(std::array<std::array<int, 2>, 2> vals) : data(vals) {}

    constexpr Matrix2x2 operator+(const Matrix2x2& other) const {
        return Matrix2x2({{
            {data[0][0] + other.data[0][0], data[0][1] + other.data[0][1]},
            {data[1][0] + other.data[1][0], data[1][1] + other.data[1][1]}
        }});
    }

    constexpr int get(int row, int col) const { return data[row][col]; }

private:
    std::array<std::array<int, 2>, 2> data;
};

int main() {
    constexpr Matrix2x2 m1({{ {1, 2}, {3, 4} }});
    constexpr Matrix2x2 m2({{ {5, 6}, {7, 8} }});
    constexpr Matrix2x2 m3 = m1 + m2;  // ✅ Compile-time matrix addition

    std::cout << "Matrix sum element (0,0): " << m3.get(0, 0) << '\n';
}
