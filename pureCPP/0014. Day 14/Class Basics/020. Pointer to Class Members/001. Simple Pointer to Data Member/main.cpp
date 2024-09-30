#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    Car(string m, int y) : model(m), year(y) {}
};

int main() {
    Car myCar("Toyota", 2020);

    // Declaring a pointer to the `year` member of class `Car`
    int Car::*yearPtr = &Car::year;

    // Accessing the `year` member using the pointer
    cout << "Year: " << myCar.*yearPtr << endl;

    return 0;
}
