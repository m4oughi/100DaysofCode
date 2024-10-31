#include <iostream>
#include <typeinfo>

class Animal {
    virtual void sound() {}
};

class Cat : public Animal {};

void castAnimal(Animal* animal) {
    try {
        Cat* catPtr = dynamic_cast<Cat*>(animal);  // Invalid cast
        if (!catPtr) {
            throw std::bad_cast();
        }
    } catch (const std::bad_cast& e) {
        std::cout << "Caught in castAnimal: " << e.what() << std::endl;
        throw;  // Rethrow to be caught at a higher level
    }
}

int main() {
    try {
        Animal* animal = new Animal();
        castAnimal(animal);
    } catch (const std::bad_cast& e) {
        std::cout << "Caught in main: " << e.what() << std::endl;
    }
    return 0;
}
