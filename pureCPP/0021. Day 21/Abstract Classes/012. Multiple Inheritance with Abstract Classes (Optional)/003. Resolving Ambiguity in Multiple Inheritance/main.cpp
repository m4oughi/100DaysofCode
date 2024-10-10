#include <iostream>
using namespace std;

// Abstract Class 1
class Animal {
public:
    virtual void sound() = 0;
};

// Abstract Class 2
class Machine {
public:
    virtual void sound() = 0;
};

// Derived Class
class RobotDog : public Animal, public Machine {
public:
    void sound() override {
        cout << "RobotDog makes mechanical sound!" << endl;
    }
};

int main() {
    RobotDog robotDog;
    robotDog.sound();  // Outputs: RobotDog makes mechanical sound!

    return 0;
}
