#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    void displayDetails() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar;
    myCar.model = "Honda";
    myCar.year = 2022;

    myCar.displayDetails();
    return 0;
}
