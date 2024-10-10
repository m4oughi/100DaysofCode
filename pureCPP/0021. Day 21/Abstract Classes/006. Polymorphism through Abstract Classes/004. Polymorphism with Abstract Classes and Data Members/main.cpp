#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayDetails() = 0;  // Pure virtual function
};

class Car : public Vehicle {
private:
    int doors;
public:
    Car(int d) : doors(d) {}
    void displayDetails() override {
        cout << "Car with " << doors << " doors." << endl;
    }
};

class Motorcycle : public Vehicle {
private:
    bool hasSidecar;
public:
    Motorcycle(bool sidecar) : hasSidecar(sidecar) {}
    void displayDetails() override {
        cout << "Motorcycle with" << (hasSidecar ? " a sidecar." : "out a sidecar.") << endl;
    }
};

void showVehicle(Vehicle* vehicle) {
    vehicle->displayDetails();  // Polymorphic behavior
}

int main() {
    Car car(4);
    Motorcycle bike(false);

    showVehicle(&car);   // Outputs "Car with 4 doors."
    showVehicle(&bike);  // Outputs "Motorcycle without a sidecar."
    return 0;
}
