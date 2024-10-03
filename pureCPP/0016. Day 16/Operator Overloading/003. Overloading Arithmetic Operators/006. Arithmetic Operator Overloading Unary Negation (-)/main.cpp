#include <iostream>
using namespace std;

class Vector {
    int x, y;
public:
    Vector(int a, int b) : x(a), y(b) {}

    Vector operator-() {
        return Vector(-x, -y);
    }

    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(3, 4);
    Vector v2 = -v1;  // Unary negation
    v2.display();  // Output: (-3, -4)
    return 0;
}
