#include <iostream>
#include <future>
#include <thread>

void computeTask(std::promise<int>& prom, bool throwError) {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate work

    if (throwError) {
        prom.set_exception(std::make_exception_ptr(std::runtime_error("An error occurred")));
    } else {
        prom.set_value(50);  // Set the result
    }
}

int main() {
    std::promise<int> prom;  // Create a promise
    std::future<int> fut = prom.get_future();  // Get the associated future

    // Launch the worker thread with an error
    std::thread t(computeTask, std::ref(prom), true);

    try {
        std::cout << "Result: " << fut.get() << std::endl;  // This will throw an exception
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;  // Output: An error occurred
    }

    t.join();
    return 0;
}
