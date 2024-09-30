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
    // Array of pointers to objects
    Car* cars[3];
    cars[0] = new Car("Nissan", 2019);
    cars[1] = new Car("Chevrolet", 2020);
    cars[2] = new Car("Jeep", 2021);

    // Access each object through the pointer array
    for (int i = 0; i < 3; ++i) {
        cars[i]->display();
    }

    // Deallocate memory for each object
    for (int i = 0; i < 3; ++i) {
        delete cars[i];
    }

    return 0;
}
