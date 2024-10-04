#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    int age;

public:
    Animal(int a) : age(a) {
        cout << "Animal created with age: " << age << endl;
    }

    ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    Dog(int a) : Animal(a) {
        cout << "Dog created with age: " << age << endl;
    }

    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};

int main() {
    Dog myDog(5);
    return 0;
}
