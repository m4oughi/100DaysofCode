#include <iostream>
#include <thread>
#include <chrono>

void scheduledTask() {
    auto startTime = std::chrono::system_clock::now() + std::chrono::seconds(5);
    std::cout << "Task will start in 5 seconds..." << std::endl;
    std::this_thread::sleep_until(startTime);
    std::cout << "Task started after 5 seconds." << std::endl;
}

int main() {
    std::thread t(scheduledTask);
    t.join();
    return 0;
}
