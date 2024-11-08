#include <iostream>
#include <future>

int task1() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task 1 completed!" << std::endl;
    return 1;
}

int task2() {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Task 2 completed!" << std::endl;
    return 2;
}

int main() {
    std::future<int> result1 = std::async(std::launch::async, task1);
    std::future<int> result2 = std::async(std::launch::async, task2);

    std::cout << "Results: " << result1.get() << ", " << result2.get() << std::endl;
    return 0;
}
