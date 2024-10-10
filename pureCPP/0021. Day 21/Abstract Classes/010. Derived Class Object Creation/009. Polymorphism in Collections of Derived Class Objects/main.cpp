#include <iostream>
#include <vector>
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

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    vector<Animal*> animals;  // Collection of pointers to derived class objects
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for (Animal* animal : animals) {
        animal->sound();  // Outputs "Woof!" and "Meow!"
    }

    // Clean up memory
    for (Animal* animal : animals) {
        delete animal;
    }

    return 0;
}
