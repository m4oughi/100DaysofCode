#include <iostream>
#include <future>
#include <thread>

int task1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return 10;
}

int task2(int val) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return val * 2;
}

int task3(int val) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return val + 5;
}

int main() {
    std::future<int> fut = std::async(std::launch::async, task1);

    fut.then([](std::future<int> f) {
        int result = f.get();
        std::cout << "Task 1 result: " << result << std::endl;
        return result;
    }).then([](std::future<int> f) {
        int result = f.get();
        std::cout << "Task 2 result: " << result << std::endl;
        return result;
    }).then([](std::future<int> f) {
        int result = f.get();
        std::cout << "Task 3 result: " << result << std::endl;
    });

    std::this_thread::sleep_for(std::chrono::seconds(4));  // Wait for all continuations
    return 0;
}
