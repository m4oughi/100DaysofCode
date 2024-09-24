#include <iostream>

struct Sensor {
    volatile int data;

    Sensor(int initialData) : data(initialData) {}

    void update(int newData) {
        data = newData;  // Updating volatile member
    }

    void read() const {
        std::cout << "Reading data: " << data << std::endl;
    }
};

int main() {
    Sensor sensor(100);
    sensor.read();
    sensor.update(200);  // Modify the volatile member
    sensor.read();
    return 0;
}
