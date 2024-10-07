#include <iostream>
#include <typeinfo>
using namespace std;

class Animal {
public:
    virtual ~Animal() {}
};

class Dog : public Animal {};
class Cat : public Animal {};

void identifyAnimal(Animal* animal) {
    if (typeid(*animal) == typeid(Dog)) {
        cout << "It's a Dog!" << endl;
    } else if (typeid(*animal) == typeid(Cat)) {
        cout << "It's a Cat!" << endl;
    } else {
        cout << "Unknown Animal!" << endl;
    }
}

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    identifyAnimal(a1);  // Identifies Dog
    identifyAnimal(a2);  // Identifies Cat

    delete a1;
    delete a2;

    return 0;
}
