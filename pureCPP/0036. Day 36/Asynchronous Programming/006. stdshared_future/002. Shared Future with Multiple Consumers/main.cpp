#include <iostream>
#include <future>
#include <thread>

int longComputation() {
    std::this_thread::sleep_for(std::chrono::seconds(2));  // Simulate a long computation
    return 42;
}

void consumer(std::shared_future<int> result) {
    std::cout << "Consumer thread received result: " << result.get() << std::endl;
}

int main() {
    std::shared_future<int> result = std::async(std::launch::async, longComputation).share();  // Shared future

    // Start multiple consumers accessing the same result
    std::thread t1(consumer, result);
    std::thread t2(consumer, result);

    t1.join();
    t2.join();

    return 0;
}
