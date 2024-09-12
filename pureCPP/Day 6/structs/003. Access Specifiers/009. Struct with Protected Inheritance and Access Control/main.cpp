#include <iostream>

struct Animal {
protected:
    int age;

public:
    Animal(int a) : age(a) {}

    virtual void speak() = 0;
};

struct Dog : protected Animal {
public:
    Dog(int a) : Animal(a) {}

    void speak() override {
        std::cout << "Woof! I am " << age << " years old." << std::endl;
    }
};

struct Labrador : public Dog {
public:
    Labrador(int a) : Dog(a) {}

    void showAge() {
        std::cout << "Labrador age: " << age << std::endl; // Accessible as protected in Dog
    }
};


int main() {


    return 0;
}