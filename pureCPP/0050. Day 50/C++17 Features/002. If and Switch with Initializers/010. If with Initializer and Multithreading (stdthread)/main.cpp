#include <iostream>
#include <thread>

void task() {
    std::cout << "Task running in a thread.\n";
}

int main() {
    if (std::thread t(task); t.joinable()) {
        t.join();
        std::cout << "Thread executed successfully.\n";
    }
    return 0;
}
