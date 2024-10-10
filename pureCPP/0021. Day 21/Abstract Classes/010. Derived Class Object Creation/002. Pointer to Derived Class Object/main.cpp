#include <iostream>
using namespace std;

// Abstract Base Class
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
};

int main() {
    Animal* animal = new Dog();  // Pointer to derived class object
    animal->sound();             // Outputs "Woof!"

    delete animal;  // Clean up memory
    return 0;
}
