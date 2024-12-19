#include <iostream>
#include <future>
#include <thread>

int task1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return 10;
}

int task2() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    return 20;
}

int main() {
    // Create multiple shared futures
    std::shared_future<int> result1 = std::async(std::launch::async, task1).share();
    std::shared_future<int> result2 = std::async(std::launch::async, task2).share();

    // Combine results from both tasks
    int finalResult = result1.get() + result2.get();
    std::cout << "Combined result: " << finalResult << std::endl;

    return 0;
}
