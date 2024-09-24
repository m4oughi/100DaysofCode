#include <iostream>

class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function makes Shape an abstract class
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Square" << std::endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw();  // Output: Drawing Circle
    shape2->draw();  // Output: Drawing Square

    delete shape1;  // Free dynamically allocated memory
    delete shape2;

    return 0;
}
