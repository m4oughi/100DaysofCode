#include <iostream>
using namespace std;

// Abstract Base Class with Virtual Destructor
class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
    virtual ~Animal() {  // Virtual destructor
        cout << "Animal Destructor" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof!" << endl;
    }
    ~Dog() override {
        cout << "Dog Destructor" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }
    ~Cat() override {
        cout << "Cat Destructor" << endl;
    }
};

int main() {
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    delete animal1;  // Calls Dog destructor followed by Animal destructor
    delete animal2;  // Calls Cat destructor followed by Animal destructor

    return 0;
}
