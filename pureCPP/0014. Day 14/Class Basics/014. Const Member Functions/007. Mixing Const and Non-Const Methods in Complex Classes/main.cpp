#include <iostream>
using namespace std;

class Vehicle {
private:
    int speed;
    mutable int accessCount;  // To track access even in const methods

public:
    Vehicle(int s) : speed(s), accessCount(0) {}

    int getSpeed() const {
        accessCount++;  // Allowed due to `mutable`
        return speed;
    }

    void setSpeed(int s) {
        speed = s;
    }

    int getAccessCount() const {
        return accessCount;
    }
};

int main() {
    Vehicle car(60);
    cout << "Speed: " << car.getSpeed() << endl;  // Const function
    car.setSpeed(80);  // Non-const function
    cout << "New Speed: " << car.getSpeed() << endl;

    cout << "Accessed getSpeed() " << car.getAccessCount() << " times" << endl;
    return 0;
}
