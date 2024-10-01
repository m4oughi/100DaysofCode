#include <iostream>

class Car {
private:
    std::string model;
    int year;
public:
    Car(std::string m, int y) {
        model = m;
        year = y;
        std::cout << "Car Model: " << model << ", Year: " << year << std::endl;
    }
};

int main() {
    Car car1("Toyota", 2020);
    return 0;
}
