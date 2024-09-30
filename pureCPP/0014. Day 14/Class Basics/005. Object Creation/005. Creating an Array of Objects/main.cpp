#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    void setDetails(string m, int y) {
        model = m;
        year = y;
    }

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car cars[3];  // Creating an array of objects

    cars[0].setDetails("Sedan", 2020);
    cars[1].setDetails("SUV", 2019);
    cars[2].setDetails("Convertible", 2021);

    for (int i = 0; i < 3; i++) {
        cars[i].display();
    }

    return 0;
}
