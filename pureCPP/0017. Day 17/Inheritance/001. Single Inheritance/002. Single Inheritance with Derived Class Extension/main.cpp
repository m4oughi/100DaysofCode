#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal makes a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.speak(); // Inherits speak() from Animal
    myDog.bark();  // Dog-specific method
    return 0;
}
