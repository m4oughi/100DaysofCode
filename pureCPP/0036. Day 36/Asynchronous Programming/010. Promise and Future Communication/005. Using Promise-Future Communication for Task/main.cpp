#include <iostream>
#include <future>
#include <thread>

void task1(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate some work
    prom.set_value(10);  // Task1 result
}

void task2(std::future<int>& fut) {
    int result = fut.get();  // Wait for result from task1
    std::cout << "Task2 received value: " << result << std::endl;  // Output: 10
    // Perform some additional work
}

int main() {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();

    // Launch task1 to set the value
    std::thread t1(task1, std::ref(prom));

    // Launch task2 to get the result of task1
    std::thread t2(task2, std::ref(fut));

    t1.join();
    t2.join();

    return 0;
}
