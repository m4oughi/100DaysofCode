#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1 = {"Toyota", 2022};

    // Create a pointer to the object
    Car* carPtr = &car1;

    // Accessing object members using the pointer
    carPtr->display();

    return 0;
}
