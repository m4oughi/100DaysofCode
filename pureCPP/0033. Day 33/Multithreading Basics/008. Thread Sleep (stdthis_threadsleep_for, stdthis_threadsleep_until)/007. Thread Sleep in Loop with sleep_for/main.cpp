#include <iostream>
#include <thread>
#include <chrono>

void periodicTask() {
    for (int i = 1; i <= 5; ++i) {
        std::cout << "Task iteration " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    std::thread t(periodicTask);
    t.join();
    return 0;
}
