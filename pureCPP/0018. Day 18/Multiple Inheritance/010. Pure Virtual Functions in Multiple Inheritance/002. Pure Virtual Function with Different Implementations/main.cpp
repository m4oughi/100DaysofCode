#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;  // Pure virtual function
};

class Vehicle {
public:
    virtual void horn() = 0;  // Pure virtual function
};

class Amphibious : public Animal, public Vehicle {
public:
    void sound() override {
        cout << "Amphibious making animal sound" << endl;
    }

    void horn() override {
        cout << "Amphibious vehicle horn" << endl;
    }
};

int main() {
    Amphibious obj;
    obj.sound();
    obj.horn();
    return 0;
}
