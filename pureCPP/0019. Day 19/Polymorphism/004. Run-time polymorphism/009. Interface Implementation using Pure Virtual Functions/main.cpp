#include <iostream>
using namespace std;

class Drawable {
public:
    virtual void draw() = 0;  // Pure virtual function (Interface)
};

class Circle : public Drawable {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Drawable {
public:
    void draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Drawable* shape;

    Circle circle;
    Square square;

    shape = &circle;
    shape->draw();  // Calls Circle's draw function

    shape = &square;
    shape->draw();  // Calls Square's draw function

    return 0;
}
