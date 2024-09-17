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

class Square : public AbstractShape {
public:
    void draw() const override {
        std::cout << "Drawing a Square." << std::endl;
    }
};

int main() {
    AbstractShape* shapes[2];
    shapes[0] = new Circle();
    shapes[1] = new Square();

    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw();  // Calls appropriate draw() function
        delete shapes[i];
    }

    return 0;
}
