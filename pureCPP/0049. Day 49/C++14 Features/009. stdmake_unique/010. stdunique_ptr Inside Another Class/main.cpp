#include <iostream>
#include <memory>

class Engine {
public:
    Engine() { std::cout << "Engine Created.\n"; }
    ~Engine() { std::cout << "Engine Destroyed.\n"; }
    void start() { std::cout << "Engine Started.\n"; }
};

class Car {
private:
    std::unique_ptr<Engine> engine;
public:
    Car() : engine(std::make_unique<Engine>()) {}
    void drive() { engine->start(); }
};

int main() {
    Car myCar;
    myCar.drive(); // Output: Engine Created. | Engine Started.
    return 0; // Engine Destroyed.
}
