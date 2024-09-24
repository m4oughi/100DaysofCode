#include <iostream>

struct Vec3 {
    struct {
        float x, y, z;
    };
    
    Vec3 operator+(const Vec3& other) const {
        return Vec3{x + other.x, y + other.y, z + other.z};
    }

    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
    }
};

int main() {
    Vec3 v1{1.0f, 2.0f, 3.0f};
    Vec3 v2{4.0f, 5.0f, 6.0f};
    
    Vec3 v3 = v1 + v2;
    v3.print();
}
