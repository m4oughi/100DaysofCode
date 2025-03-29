#include <iostream>

struct Car {
    std::string model;
    int speed;

    explicit Car(std::string m, int s) : model(std::move(m)), speed(s) {}

    auto operator<=>(const Car&) const = default;
};

int main() {
    Car c1("BMW", 200), c2("Audi", 180);

    std::cout << std::boolalpha;
    std::cout << (c1 > c2) << "\n";  // true

    return 0;
}
