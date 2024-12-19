#include <iostream>
#include <future>
#include <thread>
#include <stdexcept>

void setPromiseValue(std::promise<int>& prom) {
    try {
        // Simulate an error in the task
        throw std::runtime_error("Error setting promise value");
        prom.set_value(42);  // Never executed
    } catch (const std::exception& e) {
        // Handle error by setting the exception in the promise
        prom.set_exception(std::make_exception_ptr(e));
    }
}

int main() {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();

    // Launch a thread to set the promise value
    std::thread t(setPromiseValue, std::ref(prom));

    try {
        // Get the result from the future
        std::cout << "Result: " << fut.get() << std::endl;  // Will throw an exception
    } catch (const std::exception& e) {
        // Handle exception set by the promise
        std::cout << "Caught exception: " << e.what() << std::endl;  // Output: Error setting promise value
    }

    t.join();
    return 0;
}
