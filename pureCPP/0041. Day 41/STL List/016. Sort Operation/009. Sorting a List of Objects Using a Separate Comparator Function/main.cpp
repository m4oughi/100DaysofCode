#include <iostream>
#include <list>

class Car {
public:
    std::string model;
    int price;

    Car(std::string m, int p) : model(m), price(p) {}
};

// Comparator function
bool compareByPrice(const Car& a, const Car& b) {
    return a.price < b.price; // Sort by price
}

int main() {
    std::list<Car> cars = {{"Toyota", 25000}, {"Honda", 22000}, {"Ford", 30000}};

    cars.sort(compareByPrice);

    std::cout << "Cars Sorted by Price:\n";
    for (const auto& car : cars) 
        std::cout << car.model << " ($" << car.price << ")\n";

    return 0;
}
