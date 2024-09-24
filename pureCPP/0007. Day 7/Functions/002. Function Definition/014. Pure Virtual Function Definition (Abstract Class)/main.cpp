#include <iostream>

// Abstract class with pure virtual function
class Shape {
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

int main() {
    Circle circle;
    circle.draw();  // Calling overridden function in derived class
    return 0;
}
