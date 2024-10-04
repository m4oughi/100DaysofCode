#include <iostream>
using namespace std;

// Base classes
class Animal {
public:
    void sound() {
        cout << "Animal sound." << endl;
    }
};

class Machine {
public:
    void sound() {
        cout << "Machine noise." << endl;
    }
};

// Hybrid inheritance
class DogCar : public Animal, public Machine {
public:
    void hybridSound() {
        Animal::sound();  // Resolving ambiguity using scope resolution
        Machine::sound(); // Resolving ambiguity using scope resolution
    }
};

int main() {
    DogCar myDogCar;
    myDogCar.hybridSound();  // Resolving function ambiguity
    return 0;
}
