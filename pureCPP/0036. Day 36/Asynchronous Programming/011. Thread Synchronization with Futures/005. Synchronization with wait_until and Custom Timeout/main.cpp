#include <iostream>
#include <future>
#include <thread>
#include <chrono>

void computeTask(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(5));  // Simulate work
    prom.set_value(200);
}

int main() {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();

    std::thread t(computeTask, std::ref(prom));

    // Get the current time and add a 3-second timeout
    auto timeout = std::chrono::system_clock::now() + std::chrono::seconds(3);
    
    if (fut.wait_until(timeout) == std::future_status::timeout) {
        std::cout << "Task did not complete before timeout!" << std::endl;
    } else {
        std::cout << "Task completed with result: " << fut.get() << std::endl;
    }

    t.join();
    return 0;
}
