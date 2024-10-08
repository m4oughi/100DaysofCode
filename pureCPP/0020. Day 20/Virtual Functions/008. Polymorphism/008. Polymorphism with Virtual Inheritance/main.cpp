#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Mammal : virtual public Animal {};

class Bird : virtual public Animal {};

class Bat : public Mammal, public Bird {
public:
    void sound() override {
        cout << "Bat sound" << endl;
    }
};

int main() {
    Bat bat;
    bat.sound();  // Calls Bat's sound() method

    return 0;
}
