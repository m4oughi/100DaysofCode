#include <iostream>
#include <future>
#include <chrono>

int delayedTask() {
    std::this_thread::sleep_for(std::chrono::seconds(3));
    return 55;
}

int main() {
    std::future<int> result = std::async(std::launch::async, delayedTask);

    if (result.wait_for(std::chrono::seconds(2)) == std::future_status::timeout) {
        std::cout << "Task is taking too long!\n";
    } else {
        std::cout << "Result: " << result.get() << "\n";
    }

    return 0;
}
