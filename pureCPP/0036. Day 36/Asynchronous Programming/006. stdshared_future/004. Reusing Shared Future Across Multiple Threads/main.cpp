#include <iostream>
#include <future>
#include <thread>

int computeSum(int a, int b) {
    return a + b;
}

void threadFunction(std::shared_future<int> result) {
    std::cout << "Thread received result: " << result.get() << std::endl;
}

int main() {
    // Create a packaged task and share the result
    std::shared_future<int> sharedResult = std::async(std::launch::async, computeSum, 10, 15).share();

    // Run multiple threads using the shared_future
    std::thread t1(threadFunction, sharedResult);
    std::thread t2(threadFunction, sharedResult);
    std::thread t3(threadFunction, sharedResult);

    // Wait for all threads to complete
    t1.join();
    t2.join();
    t3.join();

    return 0;
}
