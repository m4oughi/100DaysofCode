#include <iostream>

struct Vector2D {
    constexpr Vector2D(int x, int y) : x(x), y(y) {}

    constexpr Vector2D operator+(const Vector2D& other) const {
        return Vector2D(x + other.x, y + other.y);
    }

    int x, y;
};

int main() {
    constexpr Vector2D v1(3, 4);
    constexpr Vector2D v2(1, 2);
    constexpr Vector2D v3 = v1 + v2;  // ✅ Compile-time computation

    std::cout << "X: " << v3.x << ", Y: " << v3.y << '\n';
}
