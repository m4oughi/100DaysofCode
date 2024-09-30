#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car(string m, int y) { // Constructor
        model = m;
        year = y;
    }

    void displayDetails() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar("Chevrolet", 2019);
    myCar.displayDetails();
    return 0;
}
