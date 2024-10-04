#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }
    ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called." << endl;
    }
    ~Dog() {
        cout << "Dog destructor called." << endl;
    }
};

int main() {
    Dog myDog;
    return 0;
}
