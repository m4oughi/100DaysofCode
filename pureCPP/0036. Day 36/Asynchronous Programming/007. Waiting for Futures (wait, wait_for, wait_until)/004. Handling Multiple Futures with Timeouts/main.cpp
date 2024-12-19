#include <iostream>
#include <future>
#include <thread>
#include <chrono>

int longComputation(int id) {
    std::this_thread::sleep_for(std::chrono::seconds(2 * id)); // Varying sleep times
    return id * 10;
}

int main() {
    std::future<int> f1 = std::async(std::launch::async, longComputation, 1);
    std::future<int> f2 = std::async(std::launch::async, longComputation, 2);
    std::future<int> f3 = std::async(std::launch::async, longComputation, 3);

    // Wait for results with different timeouts
    if (f1.wait_for(std::chrono::seconds(1)) == std::future_status::timeout) {
        std::cout << "f1 timed out\n";
    } else {
        std::cout << "f1 result: " << f1.get() << std::endl;
    }

    if (f2.wait_for(std::chrono::seconds(2)) == std::future_status::timeout) {
        std::cout << "f2 timed out\n";
    } else {
        std::cout << "f2 result: " << f2.get() << std::endl;
    }

    if (f3.wait_for(std::chrono::seconds(3)) == std::future_status::timeout) {
        std::cout << "f3 timed out\n";
    } else {
        std::cout << "f3 result: " << f3.get() << std::endl;
    }

    return 0;
}
