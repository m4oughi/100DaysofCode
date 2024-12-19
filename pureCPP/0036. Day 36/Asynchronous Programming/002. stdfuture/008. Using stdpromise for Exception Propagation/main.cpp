#include <iostream>
#include <future>
#include <thread>
#include <stdexcept>

void riskyTask(std::promise<int> resultPromise) {
    try {
        throw std::runtime_error("An error occurred!");
    } catch (...) {
        resultPromise.set_exception(std::current_exception());  // Pass exception to future
    }
}

int main() {
    std::promise<int> resultPromise;
    std::future<int> result = resultPromise.get_future();

    std::thread t(riskyTask, std::move(resultPromise));
    try {
        std::cout << "Result: " << result.get() << std::endl;  // Exception propagates here
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    t.join();
    return 0;
}
