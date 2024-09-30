#include <iostream>
using namespace std;

class Car {
private:
    int speed;

    // Private member function
    void accelerate() {
        speed += 10;
    }

public:
    Car() : speed(0) {}

    void drive() {
        accelerate();  // Accessing private member function
        cout << "Driving at speed: " << speed << " km/h" << endl;
    }
};

int main() {
    Car car;
    car.drive();
    return 0;
}
