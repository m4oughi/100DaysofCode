#include <iostream>
#include <memory>

class Animal {
public:
    virtual void sound() const = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() const override {
        std::cout << "Woof Woof!\n";
    }
};

int main() {
    std::unique_ptr<Animal> pet = std::make_unique<Dog>();
    pet->sound(); // Output: Woof Woof!
    return 0;
}
