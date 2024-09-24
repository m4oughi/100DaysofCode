#include <iostream>

class Vector {
public:
    int x, y;

    Vector(int x, int y) : x(x), y(y) {}

    // Overload the + operator
    Vector operator+(const Vector& other) const {
        return Vector(x + other.x, y + other.y);
    }

    void display() const {
        std::cout << "Vector(" << x << ", " << y << ")" << std::endl;
    }
};

int main() {
    Vector v1(1, 2);
    Vector v2(3, 4);
    Vector v3 = v1 + v2;  // Calls overloaded + operator
    v3.display();  // Output: Vector(4, 6)
    return 0;
}
