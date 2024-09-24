#include <iostream>
#include <thread>

struct Sensor {
    volatile int data;  // Data can be modified by multiple threads

    Sensor(int initialData) : data(initialData) {}

    void read() const {
        std::cout << "Reading data: " << data << std::endl;
    }

    void update(int newData) {
        data = newData;  // Safe to modify in multithreaded environment
    }
};

void sensorTask(Sensor& sensor) {
    sensor.update(300);
    sensor.read();
}

int main() {
    Sensor sensor(100);
    
    std::thread t1(sensorTask, std::ref(sensor));
    std::thread t2(sensorTask, std::ref(sensor));
    
    t1.join();
    t2.join();
    
    return 0;
}
