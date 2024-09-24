#include <iostream>
using namespace std;

class Car {
public:
    void describe() {
        cout << "This is a car." << endl;
    }
};

class Bike {
public:
    void describe() {
        cout << "This is a bike." << endl;
    }
};

void describe(Car c) {
    c.describe();
}

void describe(Bike b) {
    b.describe();
}

int main() {
    Car car;
    Bike bike;
    
    describe(car);   // Calls describe(Car)
    describe(bike);  // Calls describe(Bike)
    
    return 0;
}
