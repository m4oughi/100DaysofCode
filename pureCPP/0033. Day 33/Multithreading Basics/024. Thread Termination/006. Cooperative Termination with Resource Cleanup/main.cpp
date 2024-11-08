#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>

std::atomic<bool> terminateFlag(false);

void cleanupTask() {
    while (!terminateFlag) {
        std::cout << "Thread is working..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }
    std::cout << "Thread performing cleanup before terminating." << std::endl;
}

int main() {
    std::thread t(cleanupTask);

    std::this_thread::sleep_for(std::chrono::seconds(1));
    terminateFlag = true;  // Signal to terminate
    t.join();

    std::cout << "Thread terminated with cleanup completed." << std::endl;

    return 0;
}
