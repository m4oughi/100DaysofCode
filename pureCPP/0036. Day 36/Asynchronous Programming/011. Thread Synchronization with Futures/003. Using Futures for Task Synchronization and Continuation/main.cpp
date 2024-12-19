#include <iostream>
#include <future>
#include <thread>

void firstTask(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    prom.set_value(10);
}

void secondTask(std::future<int>& fut) {
    int result = fut.get();  // Wait for the result of the first task
    std::cout << "First task result: " << result << std::endl;  // Output: 10

    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    std::cout << "Second task continues after the first task" << std::endl;
}

int main() {
    std::promise<int> prom;
    std::future<int> fut = prom.get_future();

    std::thread t1(firstTask, std::ref(prom));  // Launch first task
    std::thread t2(secondTask, std::ref(fut));  // Launch second task, waits for the first task

    t1.join();
    t2.join();

    return 0;
}
