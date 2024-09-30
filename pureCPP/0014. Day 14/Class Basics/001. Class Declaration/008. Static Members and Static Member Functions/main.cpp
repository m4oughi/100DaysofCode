#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;
    static int carCount; // Static data member

public:
    Car(string m, int y) : model(m), year(y) {
        carCount++;
    }

    static int getCarCount() { // Static member function
        return carCount;
    }

    void displayDetails() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int Car::carCount = 0; // Initialize static data member

int main() {
    Car car1("Lexus", 2023);
    Car car2("Tesla", 2024);

    car1.displayDetails();
    car2.displayDetails();

    cout << "Total Cars: " << Car::getCarCount() << endl;
    return 0;
}
