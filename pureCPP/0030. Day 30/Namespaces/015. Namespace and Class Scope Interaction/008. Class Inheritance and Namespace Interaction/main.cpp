#include <iostream>

namespace Animals {
    class Animal {
    public:
        void speak() {
            std::cout << "Animal speaks!" << std::endl;
        }
    };
}

// Inheriting from the Animal class in the Animals namespace
class Dog : public Animals::Animal {
public:
    void bark() {
        std::cout << "Dog barks!" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.speak(); // Inherited method from Animal
    myDog.bark();  // Method from Dog class
    return 0;
}
