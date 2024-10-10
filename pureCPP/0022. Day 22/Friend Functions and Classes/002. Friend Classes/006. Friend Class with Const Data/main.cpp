#include <iostream>
using namespace std;

class Car {
private:
    const string model;
    const int speed;

public:
    Car(string m, int s) : model(m), speed(s) {}

    // Declare Speedometer as a friend class
    friend class Speedometer;
};

class Speedometer {
public:
    void displayInfo(const Car& car) {
        cout << "Car Model: " << car.model << endl;  // Access const private members
        cout << "Speed: " << car.speed << " km/h" << endl;
    }
};

int main() {
    Car myCar("Toyota", 120);
    Speedometer speedo;
    speedo.displayInfo(myCar);  // Friend class accessing const private members
    return 0;
}
