#include <iostream>
#include <future>
#include <thread>
#include <chrono>

int heavyComputation(int id) {
    std::this_thread::sleep_for(std::chrono::seconds(2 * id)); // Varying computation times
    return id * 100;
}

int main() {
    std::future<int> task1 = std::async(std::launch::async, heavyComputation, 1);
    std::future<int> task2 = std::async(std::launch::async, heavyComputation, 2);

    // Wait with a timeout of 2 seconds
    if (task1.wait_for(std::chrono::seconds(2)) == std::future_status::timeout) {
        std::cout << "task1 timed out" << std::endl;
    } else {
        std::cout << "task1 result: " << task1.get() << std::endl;
    }

    // Wait for task2, but give it a longer timeout (3 seconds)
    if (task2.wait_for(std::chrono::seconds(3)) == std::future_status::timeout) {
        std::cout << "task2 timed out" << std::endl;
    } else {
        std::cout << "task2 result: " << task2.get() << std::endl;
    }

    return 0;
}
