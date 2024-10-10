#include <iostream>
using namespace std;

// Abstract Base Class
class Animal {
protected:
    string species;
public:
    Animal(string sp) : species(sp) {
        cout << "Animal constructor: " << species << " created!" << endl;
    }
    
    virtual ~Animal() {
        cout << "Animal destructor: " << species << " destroyed!" << endl;
    }
    
    virtual void sound() = 0;  // Pure virtual function
};

// Derived Class 1
class Dog : public Animal {
public:
    Dog() : Animal("Dog") {
        cout << "Dog constructor called!" << endl;
    }
    
    ~Dog() {
        cout << "Dog destructor called!" << endl;
    }
    
    void sound() override {
        cout << species << " says Woof!" << endl;
    }
};

// Derived Class 2
class Cat : public Animal {
public:
    Cat() : Animal("Cat") {
        cout << "Cat constructor called!" << endl;
    }
    
    ~Cat() {
        cout << "Cat destructor called!" << endl;
    }
    
    void sound() override {
        cout << species << " says Meow!" << endl;
    }
};

int main() {
    Animal* dog = new Dog();
    dog->sound();    // Outputs: Dog says Woof!
    delete dog;      // Outputs destructors in reverse order: Dog, Animal

    Animal* cat = new Cat();
    cat->sound();    // Outputs: Cat says Meow!
    delete cat;      // Outputs destructors in reverse order: Cat, Animal

    return 0;
}
