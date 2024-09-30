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
    // Dynamically allocate memory for an array of objects
    Car* carArray = new Car[3] {
        Car("Ford", 2020), 
        Car("Tesla", 2022), 
        Car("BMW", 2023)
    };

    // Access and display each object using the pointer
    for (int i = 0; i < 3; ++i) {
        carArray[i].display();
    }

    // Deallocate memory
    delete[] carArray;

    return 0;
}
