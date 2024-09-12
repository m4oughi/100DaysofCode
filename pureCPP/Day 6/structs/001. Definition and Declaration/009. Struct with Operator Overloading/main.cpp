#include <iostream>

struct Vector2D {
    float x, y;

    Vector2D operator+(const Vector2D& v) const {
        return {x + v.x, y + v.y};
    }
};


int main() {

    return 0;
}