#include <iostream>
#include <list>

class Car {
public:
    std::string model;
    int year;

    Car(std::string m, int y) : model(m), year(y) {}
};

int main() {
    std::list<Car> cars = {{"Toyota", 2015}, {"Honda", 2018}, {"Ford", 2012}};

    cars.remove_if([](const Car& c) { return c.year < 2016; }); // Remove cars older than 2016

    std::cout << "Cars after removal:\n";
    for (const auto& car : cars) 
        std::cout << car.model << " (" << car.year << ")\n";

    return 0;
}
