#include <iostream>
using namespace std;

class Vehicle {
public:
    static const int maxSpeed = 200;  // Static const member

    void displaySpeed() {
        cout << "Maximum speed: " << maxSpeed << " km/h" << endl;
    }
};

int main() {
    Vehicle v;
    v.displaySpeed();
    return 0;
}
