#include <iostream>
#include <thread>

void task() {
    std::cout << "Task running!" << std::endl;
}

int main() {
    std::thread t1(task);
    t1.detach(); // Detach the thread

    // Attempting to join a detached thread results in an error
    try {
        if (t1.joinable()) {
            t1.join();
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: Cannot join a detached thread!" << std::endl;
    }

    std::this_thread::sleep_for(std::chrono::seconds(1)); // Ensure detached thread finishes
    return 0;
}
