#include <iostream>
#include <list>

struct Car {
    std::string brand;
    int modelYear;

    Car(std::string b, int y) : brand(b), modelYear(y) {}
};

int main() {
    std::list<Car> cars;

    cars.emplace_back("Toyota", 2020);
    cars.emplace_back("Ford", 2022);
    cars.emplace_back("Honda", 2021);

    std::cout << "Cars in the list:\n";
    for (const auto& car : cars)
        std::cout << car.brand << " - " << car.modelYear << "\n";

    return 0;
}
