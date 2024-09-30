#include <iostream>
using namespace std;

class Animal {
protected:
    string species;

public:
    Animal(string s) : species(s) {}
};

class Dog : public Animal {
private:
    string breed;

public:
    // Initializing both base class and derived class members
    Dog(string s, string b) : Animal(s), breed(b) {}

    void display() {
        cout << "Species: " << species << ", Breed: " << breed << endl;
    }
};

int main() {
    Dog dog("Mammal", "Labrador");  // Object creation with base and derived initialization
    dog.display();
    return 0;
}
