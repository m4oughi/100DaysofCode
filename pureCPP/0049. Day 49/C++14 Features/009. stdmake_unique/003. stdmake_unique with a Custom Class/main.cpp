#include <iostream>
#include <memory>

class Car {
public:
    Car(std::string model) : model(model) {
        std::cout << "Car " << model << " constructed.\n";
    }
    ~Car() {
        std::cout << "Car " << model << " destroyed.\n";
    }
    void show() const {
        std::cout << "Car Model: " << model << std::endl;
    }
private:
    std::string model;
};

int main() {
    std::unique_ptr<Car> car = std::make_unique<Car>("Tesla Model S");
    car->show(); // Output: Car Model: Tesla Model S
    return 0;
}
