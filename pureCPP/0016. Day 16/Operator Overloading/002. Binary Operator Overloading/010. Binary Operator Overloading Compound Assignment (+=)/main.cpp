#include <iostream>
using namespace std;

class Vector {
    int x, y;
public:
    Vector(int a, int b) : x(a), y(b) {}

    Vector& operator+=(const Vector& other) {
        x += other.x;
        y += other.y;
        return *this;
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(3, 4), v2(1, 2);
    v1 += v2;  // Compound assignment operator overloaded
    v1.display();  // Output: (4, 6)
    return 0;
}
