#include <iostream>
#include <thread>

void task() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Task running: " << i + 1 << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main() {
    std::thread t1(task); // Thread created
    t1.join();            // Wait for the thread to complete

    std::cout << "Thread terminated successfully!" << std::endl;
    return 0;
}
