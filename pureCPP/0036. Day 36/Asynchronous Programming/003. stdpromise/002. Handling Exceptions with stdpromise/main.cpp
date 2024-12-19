#include <iostream>
#include <future>
#include <thread>
#include <stdexcept>

void riskyComputation(std::promise<int>& prom) {
    try {
        throw std::runtime_error("Something went wrong in the computation!");
        prom.set_value(10);  // This won't be reached
    } catch (...) {
        prom.set_exception(std::current_exception());  // Set the exception to the promise
    }
}

int main() {
    std::promise<int> prom;
    std::future<int> result = prom.get_future();  // Get the future to retrieve the result

    std::thread t(riskyComputation, std::ref(prom));  // Start the risky computation in a separate thread

    try {
        std::cout << "Result: " << result.get() << std::endl;  // Will throw exception from the thread
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    t.join();  // Wait for the thread to finish
    return 0;
}
