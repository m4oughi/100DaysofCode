#include <iostream>
#include <future>
#include <thread>

int riskyComputation() {
    throw std::runtime_error("Error in computation!");
    return 42;  // This line is never reached
}

int main() {
    std::shared_future<int> result = std::async(std::launch::async, riskyComputation).share();

    // Accessing the result in multiple threads
    try {
        std::thread t1([&]() {
            try {
                std::cout << "Thread 1 received result: " << result.get() << std::endl;
            } catch (const std::exception& e) {
                std::cout << "Thread 1 caught exception: " << e.what() << std::endl;
            }
        });

        std::thread t2([&]() {
            try {
                std::cout << "Thread 2 received result: " << result.get() << std::endl;
            } catch (const std::exception& e) {
                std::cout << "Thread 2 caught exception: " << e.what() << std::endl;
            }
        });

        t1.join();
        t2.join();
    } catch (const std::exception& e) {
        std::cout << "Main thread caught exception: " << e.what() << std::endl;
    }

    return 0;
}
