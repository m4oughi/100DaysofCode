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
    void speak() { // Overriding the base class function
        cout << "Dog barks." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.speak(); // Calls overridden function in Dog
    return 0;
}
