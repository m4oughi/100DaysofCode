#include <iostream>
using namespace std;

class Engine {
public:
    int horsepower;

    Engine(int hp) : horsepower(hp) {}

    void display() {
        cout << "Horsepower: " << horsepower << " HP" << endl;
    }
};

class Car {
private:
    Engine engine;  // Car has-an Engine

public:
    string model;

    Car(string m, int hp) : model(m), engine(hp) {}

    void display() {
        cout << "Model: " << model << ", ";
        engine.display();
    }
};

int main() {
    Car car("SUV", 300);  // Creating Car object with aggregation
    car.display();
    return 0;
}
