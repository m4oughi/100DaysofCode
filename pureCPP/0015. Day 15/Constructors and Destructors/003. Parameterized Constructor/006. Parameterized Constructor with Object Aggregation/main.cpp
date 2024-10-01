#include <iostream>

class Engine {
public:
    Engine() {
        std::cout << "Engine created." << std::endl;
    }
};

class Car {
private:
    Engine engine;  // Car has an engine
    std::string brand;
public:
    Car(std::string b) : brand(b), engine() {
        std::cout << "Car Brand: " << brand << std::endl;
    }
};

int main() {
    Car car1("BMW");
    return 0;
}
