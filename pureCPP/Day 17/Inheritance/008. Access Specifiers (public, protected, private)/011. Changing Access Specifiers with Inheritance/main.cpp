#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class changes protected inheritance to public
class Dog : public Animal {
public:
    void bark() {
        sound();  // Now accessible because it's public in Dog
    }
};

int main() {
    Dog myDog;
    myDog.bark();  // Calls the inherited method
    return 0;
}
