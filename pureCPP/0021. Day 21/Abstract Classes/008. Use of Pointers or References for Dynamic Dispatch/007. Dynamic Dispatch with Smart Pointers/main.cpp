#include <iostream>
#include <memory>  // Required for smart pointers

using namespace std;

class Animal {
public:
    virtual void makeSound() = 0;  // Pure virtual function
    virtual ~Animal() = default;  // Virtual destructor for proper cleanup
};

class Dog : public Animal {
public:
    void makeSound() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    unique_ptr<Animal> dog = make_unique<Dog>();  // Smart pointer to base class
    unique_ptr<Animal> cat = make_unique<Cat>();

    dog->makeSound();  // Outputs "Woof!" due to dynamic dispatch
    cat->makeSound();  // Outputs "Meow!" due to dynamic dispatch

    // Smart pointers automatically handle memory deallocation
    return 0;
}
