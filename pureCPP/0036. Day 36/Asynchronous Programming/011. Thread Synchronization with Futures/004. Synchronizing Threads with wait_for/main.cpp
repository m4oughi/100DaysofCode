#include <iostream>
#include <future>
#include <thread>

void longTask(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(3));  // Simulate a long task
    prom.set_value(100);
}

int main() {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();

    std::thread t(longTask, std::ref(prom));

    // Use wait_for to limit the wait time to 2 seconds
    if (fut.wait_for(std::chrono::seconds(2)) == std::future_status::timeout) {
        std::cout << "The task took too long and timed out!" << std::endl;
    } else {
        std::cout << "Task completed with result: " << fut.get() << std::endl;
    }

    t.join();
    return 0;
}
