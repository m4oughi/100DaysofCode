#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;     // Pure virtual function
    virtual void move() = 0;      // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof Woof" << endl;
    }

    void move() override {
        cout << "Dog is running" << endl;
    }
};

int main() {
    Dog dog;
    dog.sound();  // Calls Dog's sound implementation
    dog.move();   // Calls Dog's move implementation

    return 0;
}
