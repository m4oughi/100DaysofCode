#include <iostream>
#include <thread>

void task() {
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    std::cout << "Task completed!" << std::endl;
}

int main() {
    unsigned int n = std::thread::hardware_concurrency();
    std::cout << "Number of concurrent threads supported: " << n << std::endl;

    std::thread t1(task); // Thread created
    t1.join();            // Wait for thread to complete

    std::cout << "Thread lifecycle managed successfully!" << std::endl;
    return 0;
}
