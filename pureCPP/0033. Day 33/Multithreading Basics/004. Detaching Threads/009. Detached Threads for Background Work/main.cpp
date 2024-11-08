#include <iostream>
#include <thread>

void backgroundTask() {
    std::cout << "Background task started..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Simulate long-running background task
    std::cout << "Background task finished!" << std::endl;
}

int main() {
    std::thread t1(backgroundTask);
    t1.detach(); // Run background task independently

    std::cout << "Main thread continues with other work..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1)); // Main thread does other work
    return 0;
}
