#include <iostream>
#include <thread>

void delayedTask() {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate long work
    std::cout << "Task completed after delay!" << std::endl;
}

int main() {
    std::thread t1(delayedTask);
    t1.detach(); // Detach the thread

    std::cout << "Main thread finishes before detached thread!" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Allow time for detached thread to finish
    return 0;
}
