#include <iostream>
using namespace std;

class Cylinder {
private:
    double radius;
    double height;
    double volume;

public:
    // Initializing volume based on radius and height
    Cylinder(double r, double h) : radius(r), height(h), volume(3.14 * r * r * h) {}

    void displayVolume() {
        cout << "Volume: " << volume << endl;
    }
};

int main() {
    Cylinder cylinder(3.0, 5.0);  // Object creation with initialization
    cylinder.displayVolume();
    return 0;
}
