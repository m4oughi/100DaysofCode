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
    void showAge() {
        cout << "Dog's age: " << getAge() << endl;  // Access base class private member through public method
    }
};

int main() {
    Dog myDog;
    myDog.sound();    // Inherited public method
    myDog.bark();     // Defined in Dog
    myDog.showAge();  // Calls base class method to access private member
    return 0;
}
