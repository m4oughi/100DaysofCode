#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void breathe() {
        cout << "Animal is breathing." << endl;
    }
};

// Base class 2
class Machine {
public:
    void move() {
        cout << "Machine moves." << endl;
    }
};

// Derived class inheriting from both base classes
class RobotDog : public Animal, public Machine {
public:
    void bark() {
        cout << "RobotDog barks mechanically." << endl;
    }
};

int main() {
    RobotDog myRobotDog;

    myRobotDog.breathe();  // Inherited from Animal
    myRobotDog.move();     // Inherited from Machine
    myRobotDog.bark();     // Defined in RobotDog

    return 0;
}
