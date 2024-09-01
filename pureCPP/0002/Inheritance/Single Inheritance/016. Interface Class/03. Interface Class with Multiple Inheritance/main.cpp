#include <iostream>
using namespace std;

// First interface class
class Shape {
public:
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

// Second interface class
class Movable {
public:
    virtual void move(int x, int y) = 0;
    virtual ~Movable() {}
};

// Derived class implementing both interfaces
class Circle : public Shape, public Movable {
private:
    int x, y;
public:
    Circle(int initX, int initY) : x(initX), y(initY) {}
    
    void draw() const override {
        cout << "Drawing a circle at (" << x << ", " << y << ")" << endl;
    }
    
    void move(int newX, int newY) override {
        x = newX;
        y = newY;
        cout << "Moved circle to (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Circle c(5, 5);
    c.draw(); // Calls draw() from Shape
    c.move(10, 10); // Calls move() from Movable
    c.draw(); // Calls draw() again

    return 0;
}
