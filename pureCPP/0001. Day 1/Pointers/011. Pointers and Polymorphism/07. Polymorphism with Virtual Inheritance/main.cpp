#include <iostream>

class Animal {
public:
    virtual void makeSound() {
        std::cout << "Some generic animal sound" << std::endl;
    }
    virtual ~Animal() {}
};

class Mammal : virtual public Animal {
public:
    void makeSound() override {
        std::cout << "Mammal sound" << std::endl;
    }
};

class Bird : virtual public Animal {
public:
    void makeSound() override {
        std::cout << "Bird sound" << std::endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void makeSound() override {
        Mammal::makeSound();  // Calls Mammal's version of makeSound
    }
};

int main() {
    Animal* animal = new Bat();
    animal->makeSound();  // Output: Mammal sound

    delete animal;
    return 0;
}
