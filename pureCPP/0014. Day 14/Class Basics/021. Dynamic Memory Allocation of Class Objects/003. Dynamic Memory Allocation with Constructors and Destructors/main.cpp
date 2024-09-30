#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    Car(string m, int y) : model(m), year(y) {
        cout << "Constructor called for " << model << endl;
    }

    ~Car() {
        cout << "Destructor called for " << model << endl;
    }

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    // Dynamically allocate memory for a single Car object
    Car* carPtr = new Car("BMW", 2023);

    carPtr->display();

    // Deallocate memory
    delete carPtr;

    return 0;
}
