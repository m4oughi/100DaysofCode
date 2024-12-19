#include <iostream>
#include <future>
#include <chrono>

int slowFunction() {
    std::this_thread::sleep_for(std::chrono::seconds(3));
    return 100;
}

int main() {
    std::future<int> result = std::async(slowFunction);
    if (result.wait_for(std::chrono::seconds(1)) == std::future_status::ready) {
        std::cout << "Result: " << result.get() << std::endl;
    } else {
        std::cout << "Timed out waiting for result." << std::endl;
    }
    return 0;
}
