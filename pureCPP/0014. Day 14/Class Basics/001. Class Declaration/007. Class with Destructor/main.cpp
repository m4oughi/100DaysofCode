#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car(string m, int y) : model(m), year(y) { }

    ~Car() { // Destructor
        cout << "Destroying car: " << model << endl;
    }

    void displayDetails() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar("Audi", 2025);
    myCar.displayDetails();
    return 0;
}
