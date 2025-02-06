#include <iostream>
#include <list>

class Car {
public:
    std::string model;
    int year;

    Car(std::string m, int y) : model(m), year(y) {}

    bool operator==(const Car& other) const {
        return model == other.model; // Consider cars duplicate if they have the same model
    }
};

int main() {
    std::list<Car> cars = {{"Toyota", 2015}, {"Toyota", 2020}, {"Honda", 2018}, {"Honda", 2021}};

    cars.unique(); // Uses operator== to check duplicates

    std::cout << "Cars after unique operation:\n";
    for (const auto& car : cars) 
        std::cout << car.model << " (" << car.year << ")\n";

    return 0;
}
