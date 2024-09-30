#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car(string m, int y) : model(m), year(y) { // Member Initializer List
    }

    void displayDetails() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar("Mercedes", 2024);
    myCar.displayDetails();
    return 0;
}
