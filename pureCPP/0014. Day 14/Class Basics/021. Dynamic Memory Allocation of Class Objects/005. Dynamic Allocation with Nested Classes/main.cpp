#include <iostream>
using namespace std;

class Engine {
public:
    int horsepower;

    Engine(int hp) : horsepower(hp) {}
};

class Car {
public:
    string model;
    int year;
    Engine* engine;

    Car(string m, int y, int hp) : model(m), year(y) {
        // Dynamically allocate memory for nested Engine object
        engine = new Engine(hp);
    }

    ~Car() {
        // Deallocate the nested Engine object
        delete engine;
    }

    void display() {
        cout << "Model: " << model << ", Year: " << year 
             << ", Horsepower: " << engine->horsepower << endl;
    }
};

int main() {
    // Dynamically allocate a Car object with a nested Engine object
    Car* carPtr = new Car("Audi", 2023, 250);

    carPtr->display();

    delete carPtr;

    return 0;
}
