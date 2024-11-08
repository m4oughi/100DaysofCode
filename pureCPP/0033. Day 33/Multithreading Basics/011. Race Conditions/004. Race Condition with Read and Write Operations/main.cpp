#include <iostream>
#include <thread>

int sharedValue = 0;

void writeValue() {
    for (int i = 0; i < 10000; ++i) {
        sharedValue = i;  // Writing to shared data
    }
}

void readValue() {
    for (int i = 0; i < 10000; ++i) {
        std::cout << "Read value: " << sharedValue << std::endl;  // Reading shared data (Race condition)
    }
}

int main() {
    std::thread t1(writeValue);
    std::thread t2(readValue);

    t1.join();
    t2.join();

    return 0;
}
