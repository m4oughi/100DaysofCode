#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Animal sound" << endl;
    }
};

class Mammal : public Animal {
public:
    void sound() override {
        cout << "Mammal sound" << endl;
    }
};

class Bird : public Animal {
public:
    void sound() override {
        cout << "Bird sound" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void sound() override {
        cout << "Bat sound" << endl;
    }
};

int main() {
    Bat bat;
    bat.Mammal::sound();  // Calls Mammal's sound()
    bat.Bird::sound();    // Calls Bird's sound()
    bat.sound();          // Calls Bat's sound()

    return 0;
}