#include <iostream>

class Vector2D {
public:
    constexpr Vector2D(int x, int y) : x_(x), y_(y) {}

    constexpr Vector2D operator+(const Vector2D& other) const {
        return Vector2D(x_ + other.x_, y_ + other.y_);
    }

    constexpr int getX() const { return x_; }
    constexpr int getY() const { return y_; }

private:
    int x_, y_;
};

int main() {
    constexpr Vector2D v1(2, 3);
    constexpr Vector2D v2(4, 5);
    constexpr Vector2D v3 = v1 + v2;  // ✅ Compile-time addition

    std::cout << "X: " << v3.getX() << ", Y: " << v3.getY() << '\n';
}
