#include <iostream>

struct Device {
    enum State { On, Off };
};

int main() {
    // On is accessible directly
    Device::State s = Device::On;
    std::cout << "Device is " << (s == 0 ? "On" : "Off") << "\n";
}
