#include <iostream>
using namespace std;

class Device {
public:
    void showStatus() {
        cout << "Device status: OK" << endl;
    }
    virtual void operate() = 0;  // Pure virtual function
};

class Television : public Device {
public:
    void operate() override {
        cout << "Television is operating." << endl;
    }
};

int main() {
    // Device device;  // Error: cannot instantiate abstract class
    Television tv;    // Works fine
    tv.showStatus();  // Non-virtual function can be called
    tv.operate();     // Overridden virtual function can be called
    return 0;
}
