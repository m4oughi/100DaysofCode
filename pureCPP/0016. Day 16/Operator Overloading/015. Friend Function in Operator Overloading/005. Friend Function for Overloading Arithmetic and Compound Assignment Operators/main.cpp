#include <iostream>
using namespace std;

class Vector {
    int x, y;
public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    // Friend function for overloading * (scalar multiplication)
    friend Vector operator*(int scalar, const Vector& v);

    // Friend function for overloading *= (scalar multiplication with assignment)
    friend Vector& operator*=(Vector& v, int scalar);

    void display() const {
        cout << "Vector(" << x << ", " << y << ")" << endl;
    }
};

// Overloading * using a friend function
Vector operator*(int scalar, const Vector& v) {
    return Vector(scalar * v.x, scalar * v.y);
}

// Overloading *= using a friend function
Vector& operator*=(Vector& v, int scalar) {
    v.x *= scalar;
    v.y *= scalar;
    return v;
}

int main() {
    Vector v1(2, 3);
    Vector v2 = 3 * v1;  // Using overloaded *
    v2.display();  // Output: Vector(6, 9)

    v1 *= 2;  // Using overloaded *=
    v1.display();  // Output: Vector(4, 6)

    return 0;
}
