#include <iostream>
using namespace std;

class Device {
    bool isOn;
public:
    Device(bool state) : isOn(state) {}

    bool operator&&(Device& other) {
        isOn = isOn && other.isOn;  // Update internal state
        return isOn;
    }

    bool operator||(Device& other) {
        isOn = isOn || other.isOn;  // Update internal state
        return isOn;
    }

    bool operator!() {
        isOn = !isOn;  // Toggle state
        return isOn;
    }

    void display() const {
        cout << (isOn ? "Device is ON" : "Device is OFF") << endl;
    }
};

int main() {
    Device d1(true), d2(false);

    cout << (d1 && d2) << endl;  // Output: 0 (false)
    d1.display();  // Output: Device is OFF
    
    cout << !d1 << endl;  // Output: 1 (true)
    d1.display();  // Output: Device is ON

    cout << (d1 || d2) << endl;  // Output: 1 (true)
    d1.display();  // Output: Device is ON
    
    return 0;
}
