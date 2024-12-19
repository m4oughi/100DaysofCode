#include <iostream>
#include <future>
#include <thread>

void threadTask() {
    std::cout << "Thread task executed." << std::endl;
}

int asyncTask() {
    return 10;
}

int main() {
    std::thread t(threadTask);  // Manually created thread
    std::future<int> result = std::async(asyncTask);  // Async task

    t.join();  // Wait for thread
    std::cout << "Async task result: " << result.get() << std::endl;
    return 0;
}
