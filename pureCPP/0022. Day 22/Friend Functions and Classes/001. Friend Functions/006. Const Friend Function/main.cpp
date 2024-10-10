#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int speed;

public:
    Car(string m, int s) : model(m), speed(s) {}

    // Const friend function declaration
    friend void displayCarInfo(const Car& car);
};

void displayCarInfo(const Car& car) {
    cout << "Car Model: " << car.model << endl;
    cout << "Car Speed: " << car.speed << " km/h" << endl;
}

int main() {
    Car myCar("Toyota", 120);
    displayCarInfo(myCar);  // Const friend function cannot modify private members
    return 0;
}
