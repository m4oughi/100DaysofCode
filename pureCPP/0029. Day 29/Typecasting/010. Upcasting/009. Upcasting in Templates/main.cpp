#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing Circle" << endl;
    }
};

template <typename T>
void render(const T& shape) {
    shape.draw();  // Upcasting happens here when T is a derived class
}

int main() {
    Circle myCircle;
    render<Shape>(myCircle);  // Upcasting Circle to Shape in template

    return 0;
}
