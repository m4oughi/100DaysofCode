#include <iostream>
#include <memory>  // Required for smart pointers
using namespace std;

class Car {
public:
    string model;
    int year;

    Car(string m, int y) : model(m), year(y) {
        cout << "Constructor called for " << model << endl;
    }

    ~Car() {
        cout << "Destructor called for " << model << endl;
    }

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    // Using smart pointer to handle object creation and destruction
    unique_ptr<Car> carPtr = make_unique<Car>("Ferrari", 2025);

    carPtr->display();

    // No need to manually delete, smart pointer handles memory management
    return 0;
}
