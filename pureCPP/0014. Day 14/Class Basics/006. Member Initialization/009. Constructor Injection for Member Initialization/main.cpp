#include <iostream>
using namespace std;

class Battery {
private:
    int capacity;

public:
    Battery(int c) : capacity(c) {}

    void display() {
        cout << "Battery Capacity: " << capacity << "mAh" << endl;
    }
};

class Phone {
private:
    Battery* battery;

public:
    // Injecting dependency through constructor
    Phone(Battery* b) : battery(b) {}

    void display() {
        battery->display();
    }
};

int main() {
    Battery battery(4000);  // Create a Battery object
    Phone phone(&battery);  // Pass it to Phone constructor

    phone.display();
    return 0;
}
