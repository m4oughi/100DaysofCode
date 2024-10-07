#include <iostream>
#include <memory>
using namespace std;

class Animal {
public:
    virtual void sound() const = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:
    void sound() const override {
        cout << "Bark" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() const override {
        cout << "Meow" << endl;
    }
};

int main() {
    shared_ptr<Animal> animal = make_shared<Dog>();  // Upcast to Animal using smart pointers
    animal->sound();  // Calls Dog's sound method

    animal = make_shared<Cat>();  // Reassign to a Cat object
    animal->sound();  // Calls Cat's sound method

    return 0;
}
