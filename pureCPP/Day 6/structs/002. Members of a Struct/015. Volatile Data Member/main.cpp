#include <iostream>

struct Sensor {
    volatile int temperature;

    void update(int newTemp) {
        temperature = newTemp;
    }
};


int main() {


    return 0;
}