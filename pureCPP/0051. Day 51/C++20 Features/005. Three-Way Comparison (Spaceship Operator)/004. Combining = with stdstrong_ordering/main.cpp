#include <iostream>
#include <compare>

class Car {
public:
    int speed;

    Car(int s) : speed(s) {}

    std::strong_ordering operator<=>(const Car& other) const {
        return speed <=> other.speed;
    }
};

int main() {
    Car car1(120), car2(150);

    if (car1 < car2) std::cout << "car1 is slower than car2\n";
    if (car1 > car2) std::cout << "car1 is faster than car2\n";
    if (car1 == car2) std::cout << "Both cars have the same speed\n";
}
