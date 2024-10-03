#include <iostream>
using namespace std;

class Vector {
    int x, y;
public:
    Vector(int a, int b) : x(a), y(b) {}

    // Vector * scalar
    Vector operator*(int scalar) const {
        return Vector(x * scalar, y * scalar);
    }

    // Scalar * Vector (friend function)
    friend Vector operator*(int scalar, const Vector& v) {
        return Vector(v.x * scalar, v.y * scalar);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v(2, 3);
    Vector v1 = v * 3;   // Vector * scalar
    Vector v2 = 4 * v;   // Scalar * Vector
    v1.display();        // Output: (6, 9)
    v2.display();        // Output: (8, 12)

    return 0;
}
