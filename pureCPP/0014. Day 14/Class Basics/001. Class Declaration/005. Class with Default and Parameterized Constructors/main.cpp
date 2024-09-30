#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car() { // Default constructor
        model = "Unknown";
        year = 0;
    }

    Car(string m, int y) { // Parameterized constructor
        model = m;
        year = y;
    }

    void displayDetails() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car defaultCar;
    Car specificCar("BMW", 2023);

    defaultCar.displayDetails();
    specificCar.displayDetails();
    return 0;
}
