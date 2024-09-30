#include <iostream>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}

    void display() {
        cout << "Horsepower: " << horsepower << endl;
    }
};

class Car {
private:
    string model;
    Engine engine;  // Nested object as a member

public:
    // Nested object must be initialized using initialization list
    Car(string m, int hp) : model(m), engine(hp) {}

    void display() {
        cout << "Car Model: " << model << ", ";
        engine.display();
    }
};

int main() {
    Car car("SportsCar", 400);  // Object creation with nested member initialization
    car.display();
    return 0;
}
