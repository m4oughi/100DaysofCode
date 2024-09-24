#include <iostream>

struct Sensor {
    volatile int data;

    Sensor(int initialData) : data(initialData) {}

    void read() const {
        std::cout << "Reading data: " << data << std::endl;
    }

    void update(volatile int newData) const {
        data = newData;  // Modifying volatile member in const function
    }
};

int main() {
    volatile Sensor sensor(150);
    sensor.read();
    sensor.update(250);  // Safe update through volatile member
    sensor.read();
    return 0;
}
