#include <iostream>
using namespace std;

class Laptop {
private:
    string model;
    int batteryLife;

public:
    Laptop(string m, int b) : model(m), batteryLife(b) {}

    // Constant member function to ensure no modification of data
    string getModel() const {
        return model;
    }

    int getBatteryLife() const {
        return batteryLife;
    }
};

int main() {
    const Laptop myLaptop("UltraBook", 10);  // Constant object
    cout << "Model: " << myLaptop.getModel() << endl;
    cout << "Battery Life: " << myLaptop.getBatteryLife() << " hours" << endl;
    return 0;
}
