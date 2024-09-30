#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    Car(string m, int y) : model(m), year(y) {}

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

// Function that accepts a pointer to an object
void showCar(Car* carPtr) {
    carPtr->display();
}

int main() {
    Car* carPtr = new Car("Audi", 2024);

    // Passing the object pointer to a function
    showCar(carPtr);

    delete carPtr;  // Deallocate memory

    return 0;
}
