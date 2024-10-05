#include <iostream>
using namespace std;

class Swimmable {
public:
    virtual void swim() = 0;  // Interface for swimming
};

class Flyable {
public:
    virtual void fly() = 0;  // Interface for flying
};

class Walkable {
public:
    virtual void walk() = 0;  // Interface for walking
};

class Duck : public Swimmable, public Flyable, public Walkable {
public:
    void swim() override {
        cout << "Duck swimming" << endl;
    }

    void fly() override {
        cout << "Duck flying" << endl;
    }

    void walk() override {
        cout << "Duck walking" << endl;
    }
};

class Fish : public Swimmable {
public:
    void swim() override {
        cout << "Fish swimming" << endl;
    }
};

class Bird : public Flyable, public Walkable {
public:
    void fly() override {
        cout << "Bird flying" << endl;
    }

    void walk() override {
        cout << "Bird walking" << endl;
    }
};

int main() {
    Duck duck;
    Fish fish;
    Bird bird;

    duck.swim();
    duck.fly();
    duck.walk();

    fish.swim();

    bird.fly();
    bird.walk();
    return 0;
}
