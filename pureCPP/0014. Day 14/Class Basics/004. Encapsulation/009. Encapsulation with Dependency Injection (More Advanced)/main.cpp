#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}

    int getHorsepower() const {
        return horsepower;
    }
};

class Car {
private:
    Engine* engine;
    string model;

public:
    Car(Engine* eng, string mod) : engine(eng), model(mod) {}

    void displayCarDetails() {
        cout << "Car Model: " << model << ", Horsepower: " << engine->getHorsepower() << endl;
    }
};

int main() {
    Engine engine(400);
    Car car(&engine, "SportsCar");
    car.displayCarDetails();
    return 0;
}
