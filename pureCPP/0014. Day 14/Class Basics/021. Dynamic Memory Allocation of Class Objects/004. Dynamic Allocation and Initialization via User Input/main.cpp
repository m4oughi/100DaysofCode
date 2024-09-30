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
    string model;
    int year;

    cout << "Enter car model: ";
    cin >> model;
    cout << "Enter car year: ";
    cin >> year;

    // Dynamically allocate a Car object based on user input
    Car* carPtr = new Car(model, year);

    carPtr->display();

    delete carPtr;

    return 0;
}
