#include <iostream>

struct Car {
    std::string brand = "Toyota";
    int year = 2020;
    double price = 25000.0;
};

int main() {
    Car c1{};  // Uses all default values
    Car c2{"Honda"};  // Only brand is set; others use default values
    Car c3{"BMW", 2022};  // Only brand and year are set

    std::cout << "Car 1: " << c1.brand << ", " << c1.year << ", $" << c1.price << "\n";
    std::cout << "Car 2: " << c2.brand << ", " << c2.year << ", $" << c2.price << "\n";
    std::cout << "Car 3: " << c3.brand << ", " << c3.year << ", $" << c3.price << "\n";

    return 0;
}
