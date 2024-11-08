#include <iostream>
#include <thread>

void task() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Detached thread completed!" << std::endl;
}

int main() {
    std::thread t1(task);
    t1.detach(); // Detach the thread to let it run independently

    std::cout << "Main thread exiting before detached thread finishes." << std::endl;
    return 0; // Main thread exits, but detached thread continues
}
