#include <iostream>
#include <thread>
#include <mutex>

struct SharedData {
    int value;
    std::mutex m;
};

void increment(SharedData &data) {
    std::scoped_lock lock(data.m); // C++17 feature
    ++data.value;
}

int main() {
    SharedData data{0}; // Aggregate initialization
    std::thread t1(increment, std::ref(data));
    std::thread t2(increment, std::ref(data));

    t1.join();
    t2.join();

    std::cout << "Final value: " << data.value << "\n";
    return 0;
}
