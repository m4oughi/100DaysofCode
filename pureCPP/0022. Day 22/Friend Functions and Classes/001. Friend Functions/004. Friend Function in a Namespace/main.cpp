#include <iostream>
using namespace std;

namespace MyNamespace {
    class Circle {
    private:
        double radius;

    public:
        Circle() : radius(7.5) {}

        // Declare friend function within a namespace
        friend void displayRadius(Circle c);
    };

    void displayRadius(Circle c) {
        cout << "Radius of the circle: " << c.radius << endl;
    }
}

int main() {
    MyNamespace::Circle circle;
    MyNamespace::displayRadius(circle);  // Friend function within namespace
    return 0;
}
