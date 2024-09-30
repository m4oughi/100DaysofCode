#include <iostream>
using namespace std;

class Engine;

class Car {
private:
    string brand;

public:
    Car(string b) : brand(b) {}

    // Friend function declaration
    friend void match(Car, Engine);
};

class Engine {
private:
    int horsepower;

public:
    Engine(int hp) : horsepower(hp) {}

    // Friend function declaration
    friend void match(Car, Engine);
};

// Friend function definition
void match(Car c, Engine e) {
    cout << "Car Brand: " << c.brand << ", Horsepower: " << e.horsepower << endl;
}

int main() {
    Car car("Tesla");
    Engine engine(450);
    match(car, engine);
    return 0;
}
