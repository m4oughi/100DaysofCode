#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    Car(string m, int y) : model(m), year(y) { }

    void displayDetails() const { // Const member function
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    const Car myCar("Porsche", 2026);
    myCar.displayDetails();
    return 0;
}
