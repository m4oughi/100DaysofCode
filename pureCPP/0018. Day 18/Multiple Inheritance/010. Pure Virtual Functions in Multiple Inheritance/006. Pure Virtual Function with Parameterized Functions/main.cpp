#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw(int size) = 0;  // Pure virtual function with a parameter
};

class Color {
public:
    virtual void fill(string color) = 0;  // Pure virtual function with a parameter
};

class Circle : public Shape, public Color {
public:
    void draw(int size) override {
        cout << "Drawing circle of size " << size << endl;
    }

    void fill(string color) override {
        cout << "Filling circle with color " << color << endl;
    }
};

int main() {
    Circle circle;
    circle.draw(5);  // Calls draw() with size parameter
    circle.fill("red");  // Calls fill() with color parameter
    return 0;
}
