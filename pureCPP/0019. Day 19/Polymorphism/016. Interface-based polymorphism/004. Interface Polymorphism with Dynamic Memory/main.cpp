#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return 0.5 * base * height;
    }
    double perimeter() const override {
        // Assuming equilateral triangle for simplicity
        return 3 * base;
    }
};

int main() {
    Shape* shapeArray[2];

    shapeArray[0] = new Triangle(3, 4);  // Dynamic memory allocation
    shapeArray[1] = new Rectangle(5, 8); // Another dynamically allocated shape

    for (int i = 0; i < 2; ++i) {
        cout << "Shape " << i + 1 << " Area: " << shapeArray[i]->area() << endl;
    }

    for (int i = 0; i < 2; ++i) {
        delete shapeArray[i];  // Freeing the allocated memory
    }

    return 0;
}
