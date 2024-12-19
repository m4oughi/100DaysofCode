#include <iostream>
#include <future>
#include <thread>
#include <string>

std::string task1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return "Hello";
}

int task2(const std::string& str) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return str.length();
}

void task3(int length) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "The length of the string is: " << length << std::endl;
}

int main() {
    std::future<std::string> fut = std::async(std::launch::async, task1);

    fut.then([](std::future<std::string> f) {
        std::string result = f.get();
        std::cout << "Task 1 result: " << result << std::endl;
        return result;
    }).then([](std::future<std::string> f) {
        std::string result = f.get();
        int length = task2(result);
        std::cout << "Task 2 result: " << length << std::endl;
        return length;
    }).then([](std::future<int> f) {
        int length = f.get();
        task3(length);
    });

    std::this_thread::sleep_for(std::chrono::seconds(4));  // Wait for all tasks
    return 0;
}
