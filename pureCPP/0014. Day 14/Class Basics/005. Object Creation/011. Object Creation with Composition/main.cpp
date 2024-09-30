#include <iostream>
using namespace std;

class Battery {
public:
    int capacity;

    Battery(int c) : capacity(c) {}

    void display() {
        cout << "Battery Capacity: " << capacity << "mAh" << endl;
    }
};

class Phone {
private:
    Battery battery;  // Phone has a Battery

public:
    string model;

    Phone(string m, int c) : model(m), battery(c) {}

    void display() {
        cout << "Phone Model: " << model << ", ";
        battery.display();
    }
};

int main() {
    Phone phone("Smartphone", 4000);  // Creating object with composition
    phone.display();
    return 0;
}
