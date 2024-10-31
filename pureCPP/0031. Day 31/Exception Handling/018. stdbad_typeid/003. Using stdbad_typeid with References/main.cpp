#include <iostream>
#include <typeinfo>

class Animal {
    virtual void sound() {}
};

int main() {
    try {
        Animal* animalPtr = nullptr;
        Animal& animalRef = *animalPtr;  // Invalid dereference
        std::cout << typeid(animalRef).name() << std::endl;
    } catch (const std::bad_typeid& e) {
        std::cout << "Caught bad_typeid with reference: " << e.what() << std::endl;
    }
    return 0;
}
