#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    void info() {
        cout << "This is a shape." << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* shape = new Rectangle();
    shape->info();  // Calls concrete method from Shape
    shape->draw();  // Calls Rectangle's draw()

    delete shape;
    return 0;
}
