#include <iostream>
#include <list>

class Car {
public:
    std::string model;
    int year;

    Car(std::string m, int y) : model(m), year(y) {}

    void display() const {
        std::cout << model << " (" << year << ")\n";
    }
};

int main() {
    std::list<Car> garage1 = {{"Toyota", 2015}, {"Honda", 2018}};
    std::list<Car> garage2 = {{"Ford", 2020}, {"BMW", 2022}};

    garage1.swap(garage2);

    std::cout << "Garage 1:\n";
    for (const auto& car : garage1) car.display();

    std::cout << "Garage 2:\n";
    for (const auto& car : garage2) car.display();

    return 0;
}
