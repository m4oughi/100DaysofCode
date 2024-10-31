#include <iostream>
#include <typeinfo>

class Shape {
    virtual void draw() {}
};

int main() {
    try {
        Shape* shapePtr = new Shape();
        delete shapePtr;  // Deleting the object
        shapePtr = nullptr;
        std::cout << typeid(*shapePtr).name() << std::endl;  // Invalid dereference
    } catch (const std::bad_typeid& e) {
        std::cout << "Caught bad_typeid after deletion: " << e.what() << std::endl;
    }
    return 0;
}
