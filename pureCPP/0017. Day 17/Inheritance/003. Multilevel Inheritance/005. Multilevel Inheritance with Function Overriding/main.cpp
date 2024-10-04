#include <iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animal sound." << endl;
    }
};

class Mammal : public Animal {
public:
    void sound() {
        cout << "Mammal sound." << endl;
    }
};

class Dog : public Mammal {
public:
    void sound() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();  // Calls Dog's overridden sound()
    return 0;
}
