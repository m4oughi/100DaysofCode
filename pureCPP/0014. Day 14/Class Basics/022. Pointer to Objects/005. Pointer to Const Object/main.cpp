#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    Car(string m, int y) : model(m), year(y) {}

    void display() const {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    // Create a const object and a pointer to it
    const Car car("Mercedes", 2025);
    const Car* carPtr = &car;

    carPtr->display();  // Accessing the object via a const pointer

    return 0;
}
