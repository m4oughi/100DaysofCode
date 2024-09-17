#include <iostream>

class AbstractVehicle {
public:
    AbstractVehicle() {
        std::cout << "AbstractVehicle constructed." << std::endl;
    }

    virtual ~AbstractVehicle() {
        std::cout << "AbstractVehicle destroyed." << std::endl;
    }

    virtual void startEngine() const = 0;  // Pure virtual function
};

class Car : public AbstractVehicle {
public:
    Car() {
        std::cout << "Car constructed." << std::endl;
    }

    ~Car() override {
        std::cout << "Car destroyed." << std::endl;
    }

    void startEngine() const override {
        std::cout << "Car engine started." << std::endl;
    }
};

int main() {
    Car car;
    car.startEngine();

    return 0;
}
