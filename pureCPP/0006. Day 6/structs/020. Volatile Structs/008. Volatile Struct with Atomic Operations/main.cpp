#include <iostream>
#include <atomic>

struct Sensor {
    volatile std::atomic<int> data;  // Volatile atomic variable

    Sensor(int initialData) : data(initialData) {}

    void read() const {
        std::cout << "Reading data: " << data.load() << std::endl;
    }

    void update(int newData) {
        data.store(newData);  // Atomic update for volatile data
    }
};

int main() {
    Sensor sensor(100);
    sensor.read();
    sensor.update(400);  // Atomic and volatile update
    sensor.read();
    return 0;
}
