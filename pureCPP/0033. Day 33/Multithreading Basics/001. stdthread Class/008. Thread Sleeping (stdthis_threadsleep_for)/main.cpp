#include <iostream>
#include <thread>
#include <chrono>

void timedTask() {
    std::cout << "Starting task..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Sleep for 2 seconds
    std::cout << "Task completed!" << std::endl;
}

int main() {
    std::thread t1(timedTask);
    t1.join();
    return 0;
}
