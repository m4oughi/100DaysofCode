#include <iostream>

struct Sensor {
    volatile int data;

    Sensor(int initialData) : data(initialData) {}

    void read() const {
        std::cout << "Reading data: " << data << std::endl;
    }
};

int main() {
    Sensor sensor(100);
    sensor.read();  // Safe to read volatile data
    return 0;
}
