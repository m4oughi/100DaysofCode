#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat is meowing" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;
    
    dog.eat();  // Inherited from Animal
    dog.bark(); // Dog's own method
    
    cat.eat();  // Inherited from Animal
    cat.meow(); // Cat's own method

    return 0;
}
