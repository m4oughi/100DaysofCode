#include <iostream>

struct Sensor {
    volatile int data;

    Sensor(int initialData) : data(initialData) {}

    void read() const {
        std::cout << "Reading data: " << data << std::endl;
    }
};

int main() {
    volatile Sensor sensor(100);  // Entire struct is volatile
    sensor.read();
    
    volatile Sensor* sensorPtr = &sensor;
    sensorPtr->data = 300;  // Safe to modify volatile struct via pointer
    sensor.read();
    return 0;
}
