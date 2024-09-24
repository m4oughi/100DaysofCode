#include <iostream>

struct Sensor {
    volatile int status;
    mutable int accessCount;

    Sensor() : status(0), accessCount(0) {}

    void read() const {
        ++accessCount;  // Mutable allows modification in const function
        std::cout << "Status: " << status << ", Access Count: " << accessCount << std::endl;
    }

    void updateStatus(volatile int newStatus) const {
        status = newStatus;  // Modifying volatile member
    }
};

int main() {
    const volatile Sensor sensor;
    sensor.read();
    sensor.updateStatus(1);  // Modifies the volatile member
    sensor.read();
    return 0;
}
