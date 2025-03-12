#include <iostream>
#include <future>
#include <thread>

int slowTask() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
    return 99;
}

int main() {
    std::future<int> result = std::async(std::launch::async, slowTask);

    result.wait(); // Waits for the task to complete

    std::cout << "Result is: " << result.get() << "\n";
    return 0;
}
