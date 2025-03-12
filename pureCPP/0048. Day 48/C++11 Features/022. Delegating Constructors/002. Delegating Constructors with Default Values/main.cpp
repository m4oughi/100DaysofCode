#include <iostream>

class Car {
    std::string brand;
    int speed;
public:
    Car(std::string b) : Car(b, 0) {} // Delegating constructor

    Car(std::string b, int s) : brand(b), speed(s) {}

    void show() const {
        std::cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << std::endl;
    }
};

int main() {
    Car c1("Toyota"); // Uses delegating constructor
    Car c2("BMW", 200);

    c1.show();
    c2.show();

    return 0;
}
