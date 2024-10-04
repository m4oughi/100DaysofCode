#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal makes a sound." << endl;
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

int main() {
    Dog myDog;
    Cat myCat;

    myDog.sound();  // Inherited from Animal
    myDog.bark();   // Defined in Dog

    myCat.sound();  // Inherited from Animal
    myCat.meow();   // Defined in Cat

    return 0;
}
