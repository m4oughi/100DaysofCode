#include <iostream>

class AbstractShape {
public:
    virtual void draw() const = 0;  // Pure virtual function
};

class Circle : public AbstractShape {
public:
    void draw() const override {
        std::cout << "Drawing a Circle." << std::endl;
    }
};

int main() {
    Circle circle;
    circle.draw();  // Calls derived class implementation

    return 0;
}
