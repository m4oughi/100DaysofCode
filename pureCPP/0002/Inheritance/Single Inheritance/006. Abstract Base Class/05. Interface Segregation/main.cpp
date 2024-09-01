#include <iostream>
using namespace std;

// Abstract base class (Interface)
class IAnimal {
public:
    virtual void eat() = 0;    // Pure virtual function
    virtual void sleep() = 0;  // Pure virtual function
};

// Another abstract base class (Interface)
class ICanFly {
public:
    virtual void fly() = 0;    // Pure virtual function
};

// Derived class implementing IAnimal
class Dog : public IAnimal {
public:
    void eat() override {
        cout << "Dog eats dog food." << endl;
    }
    void sleep() override {
        cout << "Dog sleeps." << endl;
    }
};

// Derived class implementing IAnimal and ICanFly
class Bird : public IAnimal, public ICanFly {
public:
    void eat() override {
        cout << "Bird eats seeds." << endl;
    }
    void sleep() override {
        cout << "Bird sleeps in its nest." << endl;
    }
    void fly() override {
        cout << "Bird flies high in the sky." << endl;
    }
};

int main() {
    Dog dog;
    Bird bird;

    dog.eat();
    dog.sleep();

    bird.eat();
    bird.sleep();
    bird.fly();

    return 0;
}
