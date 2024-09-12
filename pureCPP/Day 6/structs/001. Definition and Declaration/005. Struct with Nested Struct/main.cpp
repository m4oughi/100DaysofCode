#include <iostream>

struct Car {
    struct Engine {
        int horsepower;
        int cylinders;
    };

    Engine engine;
    std::string model;
};

int main() {

    return 0;
}