#include <iostream>
using namespace std;

class Triangle {
public:
    double base;
    double height;

    Triangle(double b, double h) : base(b), height(h) {}

    void displayArea() const {
        cout << "Area: " << 0.5 * base * height << endl;
    }
};

void printTriangle(const Triangle &t) {  // Passed by const reference
    t.displayArea();  // Only read access
}

int main() {
    Triangle triangle1(5.0, 10.0);
    printTriangle(triangle1);  // Object passed as const reference

    return 0;
}
