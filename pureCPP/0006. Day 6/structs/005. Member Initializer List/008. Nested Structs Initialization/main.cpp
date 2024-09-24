#include <iostream>

struct Engine {
    int horsepower;
    
    Engine(int hp) : horsepower(hp) {}
};

struct Car {
    Engine engine;
    std::string model;

    // Member initializer list for nested structs
    Car(int hp, const std::string& m) : engine(hp), model(m) {}
};

int main() {


    return 0;
}