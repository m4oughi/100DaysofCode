#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) : radius(r) {}

    void displayArea() {
        cout << "Area: " << 3.14 * radius * radius << endl;
    }
};

void printArea(Circle c) {  // Passed by value
    c.displayArea();
}

int main() {
    Circle circle1(5.0);
    printArea(circle1);  // Object passed as an argument by value

    return 0;
}
#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    Circle(double r) : radius(r) {}

    void displayArea() {
        cout << "Area: " << 3.14 * radius * radius << endl;
    }
};

void printArea(Circle c) {  // Passed by value
    c.displayArea();
}

int main() {
    Circle circle1(5.0);
    printArea(circle1);  // Object passed as an argument by value

    return 0;
}
