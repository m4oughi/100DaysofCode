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

void task3(int val1, int val2) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Final result: " << val1 + val2 << std::endl;
}

int main() {
    std::future<int> fut1 = std::async(std::launch::async, task1);
    std::future<int> fut2 = std::async(std::launch::async, task2);

    auto cont1 = fut1.then([](std::future<int> f) {
        return f.get();  // Return result from task1
    });

    auto cont2 = fut2.then([](std::future<int> f) {
        return f.get();  // Return result from task2
    });

    cont1.then([cont2](std::future<int> f) {
        int result1 = f.get();
        int result2 = cont2.get();  // Wait for task2 result
        task3(result1, result2);
    });

    std::this_thread::sleep_for(std::chrono::seconds(4));  // Wait for all tasks
    return 0;
}
