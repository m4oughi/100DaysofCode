#include <iostream>
#include <future>
#include <thread>

void task1(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    prom.set_value(42);  // Set task1 result
}

void task2(std::future<int>& fut) {
    int result = fut.get();  // Wait for task1 to finish
    std::cout << "Task1 result: " << result << std::endl;  // Output: 42

    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    std::cout << "Task2 completed" << std::endl;
}

int main() {
    std::promise<int> prom1;
    std::future<int> fut1 = prom1.get_future();

    std::thread t1(task1, std::ref(prom1));
    std::thread t2(task2, std::ref(fut1));

    t1.join();
    t2.join();

    return 0;
}
