#include <iostream>
#include <future>
#include <thread>

int compute() {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate computation
    return 42;
}

void printResult(std::shared_future<int> fut) {
    std::cout << "Result from thread: " << fut.get() << std::endl;
}

int main() {
    // Launch asynchronous task and share the future
    std::shared_future<int> result = std::async(std::launch::async, compute).share();

    // Launch two threads to access the shared future
    std::thread t1(printResult, result);
    std::thread t2(printResult, result);

    t1.join();
    t2.join();

    return 0;
}
