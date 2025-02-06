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

    cars.reverse(); // Reverse the list

    std::cout << "Reversed Car List:\n";
    for (const auto& car : cars) 
        std::cout << car.model << " (" << car.year << ")\n";

    return 0;
}
