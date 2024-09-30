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
    Car myCar("Honda", 2021);

    // Declaring a pointer to the `display` member function
    void (Car::*displayPtr)() = &Car::display;

    // Calling the member function using the pointer
    (myCar.*displayPtr)();

    return 0;
}
