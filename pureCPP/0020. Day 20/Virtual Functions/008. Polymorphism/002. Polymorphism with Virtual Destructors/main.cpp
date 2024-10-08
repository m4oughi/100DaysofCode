#include <iostream>
using namespace std;

class Animal {
public:
    virtual ~Animal() {  // Virtual destructor
        cout << "Animal destructor" << endl;
    }
};

class Dog : public Animal {
public:
    ~Dog() {
        cout << "Dog destructor" << endl;
    }
};

int main() {
    Animal* animal = new Dog();
    delete animal;  // Calls Dog's destructor, then Animal's destructor
    return 0;
}
