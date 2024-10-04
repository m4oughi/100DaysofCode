#include <iostream>
using namespace std;

class Animal {
public:
    void breathe() {
        cout << "Animal is breathing." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
    }
};

class Bird : public Animal {
public:
    void chirp() {
        cout << "Bird chirps." << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;
    Bird myBird;

    myDog.breathe();
    myDog.bark();

    myCat.breathe();
    myCat.meow();

    myBird.breathe();
    myBird.chirp();

    return 0;
}
