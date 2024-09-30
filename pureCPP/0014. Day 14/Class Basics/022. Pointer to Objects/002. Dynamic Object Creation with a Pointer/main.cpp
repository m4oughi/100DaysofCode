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
    // Dynamically create an object using a pointer
    Car* carPtr = new Car("Honda", 2023);

    carPtr->display();

    // Deallocate memory
    delete carPtr;

    return 0;
}
