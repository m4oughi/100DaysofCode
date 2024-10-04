#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class overriding and making the function public
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks loudly." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.sound();  // Can now access the function publicly
    return 0;
}
