#include <iostream>
#include <future>
#include <chrono>

int longComputation() {
    std::this_thread::sleep_for(std::chrono::seconds(3));
    return 42;
}

int main() {
    std::future<int> result = std::async(longComputation);

    if (result.wait_for(std::chrono::seconds(1)) == std::future_status::ready) {
        std::cout << "Result: " << result.get() << std::endl;
    } else {
        std::cout << "Task is still running..." << std::endl;
    }

    return 0;
}
