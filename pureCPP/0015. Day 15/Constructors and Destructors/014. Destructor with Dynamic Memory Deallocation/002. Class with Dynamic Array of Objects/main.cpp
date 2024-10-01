#include <iostream>

class Object {
public:
    Object() {
        std::cout << "Object created." << std::endl;
    }

    ~Object() {
        std::cout << "Object destroyed." << std::endl;
    }
};

class ObjectArray {
private:
    Object* objects;
public:
    ObjectArray(int size) {
        objects = new Object[size];  // Allocating memory for multiple objects
        std::cout << "Object array of size " << size << " allocated." << std::endl;
    }

    ~ObjectArray() {
        delete[] objects;  // Deallocating memory for all objects
        std::cout << "Object array deallocated." << std::endl;
    }
};

int main() {
    ObjectArray objArray(3);  // Constructor and destructor will manage multiple objects
    return 0;
}
