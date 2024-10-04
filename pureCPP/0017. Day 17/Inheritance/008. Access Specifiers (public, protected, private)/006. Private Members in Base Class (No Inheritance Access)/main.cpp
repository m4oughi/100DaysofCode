#include <iostream>
using namespace std;

// Base class
class Animal {
private:
    int age = 5;

public:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
    int getAge() {
        return age;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
    // int accessAge() { return age; }  // Error: age is private in Animal
};

int main() {
    Dog myDog;
    myDog.sound();         // Accessible because sound() is public
    cout << "Age: " << myDog.getAge() << endl;  // Access through public getter
    return 0;
}
