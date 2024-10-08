#include <iostream>
using namespace std;

class Mammal {
public:
    virtual void speak() {
        cout << "Mammal sound" << endl;
    }
};

class Bird {
public:
    virtual void speak() {
        cout << "Bird sound" << endl;
    }
};

class Bat : public Mammal, public Bird {
public:
    void speak() override {
        cout << "Bat sound" << endl;
    }
};

int main() {
    Bat bat;
    Mammal* mammalPtr = &bat;
    Bird* birdPtr = &bat;

    mammalPtr->speak();  // Calls Bat's speak() via Mammal pointer
    birdPtr->speak();    // Calls Bat's speak() via Bird pointer

    return 0;
}
