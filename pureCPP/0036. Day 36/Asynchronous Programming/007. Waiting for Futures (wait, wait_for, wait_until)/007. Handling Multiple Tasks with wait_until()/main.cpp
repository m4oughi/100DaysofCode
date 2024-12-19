#include <iostream>
#include <future>
#include <thread>
#include <chrono>

int slowTask() {
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return 10;
}

int fastTask() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    return 5;
}

int main() {
    std::future<int> slow = std::async(std::launch::async, slowTask);
    std::future<int> fast = std::async(std::launch::async, fastTask);

    auto deadline = std::chrono::steady_clock::now() + std::chrono::seconds(3);

    if (slow.wait_until(deadline) == std::future_status::timeout) {
        std::cout << "Slow task timed out" << std::endl;
    } else {
        std::cout << "Slow task result: " << slow.get() << std::endl;
    }

    if (fast.wait_until(deadline) == std::future_status::timeout) {
        std::cout << "Fast task timed out" << std::endl;
    } else {
        std::cout << "Fast task result: " << fast.get() << std::endl;
    }

    return 0;
}
