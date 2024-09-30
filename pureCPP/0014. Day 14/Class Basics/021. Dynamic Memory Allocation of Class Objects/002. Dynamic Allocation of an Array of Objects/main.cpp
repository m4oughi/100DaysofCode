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
    // Dynamically allocate memory for an array of Car objects
    Car* carArray = new Car[3] { 
        Car("Toyota", 2022), 
        Car("Honda", 2021), 
        Car("Ford", 2020) 
    };

    // Access and display each object in the array
    for (int i = 0; i < 3; ++i) {
        carArray[i].display();
    }

    // Deallocate memory
    delete[] carArray;

    return 0;
}
