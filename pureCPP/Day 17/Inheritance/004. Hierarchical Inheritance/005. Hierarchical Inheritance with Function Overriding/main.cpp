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
    void sound() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    myDog.sound();  // Calls Dog's overridden sound method
    myCat.sound();  // Calls Cat's overridden sound method

    return 0;
}
