#include <iostream>
using namespace std;

class Animal {
public:
    string species;

    Animal(string s) : species(s) {}

    void display() {
        cout << "Species: " << species << endl;
    }
};

class Dog : public Animal {
public:
    string breed;

    Dog(string s, string b) : Animal(s), breed(b) {}

    void display() {
        cout << "Species: " << species << ", Breed: " << breed << endl;
    }
};

int main() {
    Dog dog("Mammal", "Golden Retriever");  // Creating derived class object
    dog.display();
    return 0;
}
