#include <iostream>
#include <thread>
#include <chrono>

void work() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Work done in detached thread.\n";
}

int main() {
    std::thread t(work);
    t.detach(); // The thread runs independently

    std::cout << "Main thread continues...\n";
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Give detached thread time to finish

    return 0;
}
