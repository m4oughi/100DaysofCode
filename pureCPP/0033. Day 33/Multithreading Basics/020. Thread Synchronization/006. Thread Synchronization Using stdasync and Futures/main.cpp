#include <iostream>
#include <future>

int computeTask(int num) {
    std::this_thread::sleep_for(std::chrono::seconds(num));
    return num * 2;
}

int main() {
    std::future<int> result1 = std::async(std::launch::async, computeTask, 2);
    std::future<int> result2 = std::async(std::launch::async, computeTask, 3);

    std::cout << "Result of task 1: " << result1.get() << std::endl;
    std::cout << "Result of task 2: " << result2.get() << std::endl;

    return 0;
}
