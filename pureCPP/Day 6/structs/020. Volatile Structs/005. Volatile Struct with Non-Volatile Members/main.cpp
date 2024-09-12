#include <iostream>

struct Sensor {
    volatile int status;  // Only this member is volatile
    int data;

    Sensor(int initialData) : status(0), data(initialData) {}

    void read() const {
        std::cout << "Status: " << status << ", Data: " << data << std::endl;
    }

    void update(int newData) {
        data = newData;  // Safe to update non-volatile member
    }
};

int main() {
    Sensor sensor(100);
    sensor.read();
    sensor.update(200);  // Only modifies non-volatile member
    sensor.read();
    return 0;
}
