#include <iostream>

struct Sensor {
    volatile unsigned int status : 1;  // Volatile bit-field
    unsigned int errorCode : 7;

    Sensor() : status(0), errorCode(0) {}

    void read() const {
        std::cout << "Status: " << status << ", Error Code: " << errorCode << std::endl;
    }
};

int main() {
    volatile Sensor sensor;
    sensor.read();
    
    sensor.status = 1;  // Modify volatile bit-field
    sensor.read();
    return 0;
}
