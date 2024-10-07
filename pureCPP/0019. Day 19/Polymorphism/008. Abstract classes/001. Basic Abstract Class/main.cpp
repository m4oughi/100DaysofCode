#include <iostream>
using namespace std;

// Abstract base class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof Woof" << endl;
    }
};

int main() {
    Dog dog;
    dog.sound();  // Calls Dog's sound method
    return 0;
}
