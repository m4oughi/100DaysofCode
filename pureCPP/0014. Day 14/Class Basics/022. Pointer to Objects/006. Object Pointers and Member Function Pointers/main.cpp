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

int main() {
    Car car1("Volvo", 2021);

    // Pointer to object
    Car* carPtr = &car1;

    // Pointer to member function
    void (Car::*funcPtr)() = &Car::display;

    // Calling member function using pointer to object and pointer to member function
    (carPtr->*funcPtr)();

    return 0;
}
