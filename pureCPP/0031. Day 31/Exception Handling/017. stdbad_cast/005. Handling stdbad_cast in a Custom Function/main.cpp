#include <iostream>
#include <typeinfo>

class Shape {
    virtual void draw() {}
};

class Circle : public Shape {};

void checkCast(Shape* shape) {
    try {
        Circle* circlePtr = dynamic_cast<Circle*>(shape);  // Invalid cast
        if (!circlePtr) {
            throw std::bad_cast();
        }
        std::cout << "Valid cast to Circle" << std::endl;
    } catch (const std::bad_cast& e) {
        std::cout << "Caught bad_cast in custom function: " << e.what() << std::endl;
    }
}

int main() {
    Shape* shapePtr = new Shape();
    checkCast(shapePtr);
    return 0;
}
