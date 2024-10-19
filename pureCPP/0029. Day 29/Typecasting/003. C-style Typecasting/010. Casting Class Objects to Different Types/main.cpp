#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks!" << endl;
    }
};

class Car {
public:
    void honk() {
        cout << "Car honks!" << endl;
    }
};

int main() {
    Animal* animal = new Animal();
    Car* car = (Car*)animal;  // C-style casting between unrelated classes (unsafe)
    car->honk();  // Undefined behavior
    delete animal;
    return 0;
}
