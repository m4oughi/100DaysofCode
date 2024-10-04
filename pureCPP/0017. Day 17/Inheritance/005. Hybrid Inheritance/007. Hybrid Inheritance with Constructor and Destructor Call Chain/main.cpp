#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called." << endl;
    }
    virtual ~Animal() {
        cout << "Animal destructor called." << endl;
    }
};

class Machine {
public:
    Machine() {
        cout << "Machine constructor called." << endl;
    }
    virtual ~Machine() {
        cout << "Machine destructor called." << endl;
    }
};

class Mammal : virtual public Animal {
public:
    Mammal() {
        cout << "Mammal constructor called." << endl;
    }
    ~Mammal() {
        cout << "Mammal destructor called." << endl;
    }
};

class Car : virtual public Machine {
public:
    Car() {
        cout << "Car constructor called." << endl;
    }
    ~Car() {
        cout << "Car destructor called." << endl;
    }
};

class RobotDog : public Mammal, public Car {
public:
    RobotDog() {
        cout << "RobotDog constructor called." << endl;
    }
    ~RobotDog() {
        cout << "RobotDog destructor called." << endl;
    }
};

int main() {
    RobotDog myRobotDog;

    // Destructor chain will be invoked automatically when myRobotDog goes out of scope
    return 0;
}
