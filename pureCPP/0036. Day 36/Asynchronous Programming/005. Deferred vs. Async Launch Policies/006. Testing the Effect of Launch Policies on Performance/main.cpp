#include <iostream>
#include <future>
#include <thread>
#include <chrono>

int slowComputation() {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate a time-consuming task
    return 42;
}

int main() {
    auto start = std::chrono::steady_clock::now();

    // Using std::launch::async (runs in a new thread)
    std::future<int> asyncResult = std::async(std::launch::async, slowComputation);
    std::cout << "Async task result: " << asyncResult.get() << std::endl;

    auto asyncDuration = std::chrono::steady_clock::now() - start;
    std::cout << "Async execution took: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(asyncDuration).count() 
              << " milliseconds\n";

    start = std::chrono::steady_clock::now();

    // Using std::launch::deferred (runs in the main thread)
    std::future<int> deferredResult = std::async(std::launch::deferred, slowComputation);
    std::cout << "Deferred task result: " << deferredResult.get() << std::endl;

    auto deferredDuration = std::chrono::steady_clock::now() - start;
    std::cout << "Deferred execution took: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(deferredDuration).count() 
              << " milliseconds\n";

    return 0;
}
