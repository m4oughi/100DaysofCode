#include <iostream>
#include <memory>  // Required for smart pointers
using namespace std;

class Car {
public:
    string model;
    int year;

    Car(string m, int y) : model(m), year(y) {
        cout << "Car Constructor called for " << model << endl;
    }

    ~Car() {
        cout << "Car Destructor called for " << model << endl;
    }

    void display() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    // Using smart pointer to handle dynamic memory
    unique_ptr<Car> carPtr = make_unique<Car>("Tesla", 2024);

    carPtr->display();

    // No need to explicitly delete the memory, handled by smart pointer

    return 0;
}
