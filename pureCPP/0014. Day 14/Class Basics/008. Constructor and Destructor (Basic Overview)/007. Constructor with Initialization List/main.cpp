#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    // Constructor using initialization list
    Car(string m, int y) : model(m), year(y) {}

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car("Toyota", 2022);  // Constructor called
    car.display();
    return 0;
}
