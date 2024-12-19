#include <iostream>
#include <future>
#include <thread>
#include <stdexcept>

void riskyTask(std::promise<int>& prom) {
    try {
        throw std::runtime_error("An error occurred in the task!");
        prom.set_value(42);  // This will not be executed
    } catch (...) {
        prom.set_exception(std::current_exception());  // Set exception to the future
    }
}

int main() {
    std::promise<int> prom;
    std::future<int> result = prom.get_future();

    std::thread t(riskyTask, std::ref(prom));

    try {
        std::cout << "Result: " << result.get() << std::endl;  // Will throw exception
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    t.join();
    return 0;
}
