#include <iostream>
#include <thread>

void task() {
    std::cout << "Task running!" << std::endl;
}

int main() {
    std::thread t1(task);
    t1.detach(); // Detach the thread to run independently

    std::cout << "Main thread continues..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Allow detached thread to finish
    return 0;
}
