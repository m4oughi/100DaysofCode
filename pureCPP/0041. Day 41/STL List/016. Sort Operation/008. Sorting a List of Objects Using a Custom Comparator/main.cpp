#include <iostream>
#include <list>

class Car {
public:
    std::string model;
    int year;

    Car(std::string m, int y) : model(m), year(y) {}

    bool operator<(const Car& other) const {
        return year < other.year; // Sort by year
    }
};

int main() {
    std::list<Car> cars = {{"Toyota", 2015}, {"Honda", 2018}, {"Ford", 2012}};

    cars.sort(); // Uses operator< to sort by year

    std::cout << "Cars Sorted by Year:\n";
    for (const auto& car : cars) 
        std::cout << car.model << " (" << car.year << ")\n";

    return 0;
}
