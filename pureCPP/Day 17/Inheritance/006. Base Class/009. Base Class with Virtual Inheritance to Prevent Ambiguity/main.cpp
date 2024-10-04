#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void breathe() {
        cout << "Animal is breathing." << endl;
    }
};

// Intermediate classes using virtual inheritance to prevent ambiguity
class Mammal : virtual public Animal {};
class Bird : virtual public Animal {};

// Derived class inheriting from both Mammal and Bird
class Bat : public Mammal, public Bird {};

int main() {
    Bat myBat;
    myBat.breathe();  // No ambiguity due to virtual inheritance

    return 0;
}
