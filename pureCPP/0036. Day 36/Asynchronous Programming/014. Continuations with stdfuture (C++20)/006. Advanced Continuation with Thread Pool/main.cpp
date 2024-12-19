#include <iostream>
#include <future>
#include <thread>
#include <vector>

int task1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return 1;
}

int task2() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return 2;
}

int task3() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    return 3;
}

void finalTask(int sum) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Total sum: " << sum << std::endl;
}

int main() {
    std::vector<std::future<int>> futures;
    futures.push_back(std::async(std::launch::async, task1));
    futures.push_back(std::async(std::launch::async, task2));
    futures.push_back(std::async(std::launch::async, task3));

    std::future<int> sumFuture = std::async(std::launch::async, []() {
        int sum = 0;
        for (auto& fut : futures) {
            sum += fut.get();
        }
        return sum;
    });

    sumFuture.then([](std::future<int> f) {
        int sum = f.get();
        finalTask(sum);
    });

    std::this_thread::sleep_for(std::chrono::seconds(5));  // Wait for all tasks
    return 0;
}
