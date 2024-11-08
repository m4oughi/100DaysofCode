#include <iostream>
#include <thread>
#include <future>
#include <chrono>

void promiseBasedTask(std::future<void> stopSignal) {
    while (stopSignal.wait_for(std::chrono::milliseconds(100)) == std::future_status::timeout) {
        std::cout << "Thread is still running..." << std::endl;
    }
    std::cout << "Thread received stop signal." << std::endl;
}

int main() {
    std::promise<void> exitSignal;
    std::future<void> futureObj = exitSignal.get_future();
    
    std::thread t(promiseBasedTask, std::move(futureObj));

    std::this_thread::sleep_for(std::chrono::seconds(1));
    exitSignal.set_value();  // Signal thread to stop
    t.join();

    std::cout << "Thread has terminated cleanly." << std::endl;

    return 0;
}
