#include <iostream>
#include <future>
#include <thread>
#include <stdexcept>

void riskyCalculation(std::promise<int>& prom, int value) {
    if (value == 0) {
        prom.set_exception(std::make_exception_ptr(std::runtime_error("Cannot divide by zero")));
    } else {
        prom.set_value(100 / value);  // Normal division
    }
}

int main() {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();

    // Launch a thread to perform the risky calculation
    std::thread t(riskyCalculation, std::ref(prom), 0);  // This will cause an exception

    try {
        int result = fut.get();  // This will throw an exception due to division by zero
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;  // Output: Cannot divide by zero
    }

    t.join();
    return 0;
}
