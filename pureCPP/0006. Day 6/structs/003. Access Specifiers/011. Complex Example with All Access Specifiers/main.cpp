#include <iostream>

struct Vehicle {
protected:
    int speed;

private:
    int fuel;

public:
    Vehicle(int spd, int f) : speed(spd), fuel(f) {}

    int getSpeed() const {
        return speed;
    }

    int getFuel() const {
        return fuel;
    }
};

struct Car : private Vehicle {
private:
    std::string model;

public:
    Car(int spd, int f, const std::string& mdl) : Vehicle(spd, f), model(mdl) {}

    void showDetails() {
        std::cout << "Model: " << model << ", Speed: " << getSpeed() << ", Fuel: " << getFuel() << std::endl;
    }
};
