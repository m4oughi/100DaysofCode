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
    // Dynamically allocate memory for a single Car object
    Car* carPtr = new Car("Toyota", 2022);

    carPtr->display();  // Access the object using the pointer

    delete carPtr;  // Deallocate memory

    return 0;
}
