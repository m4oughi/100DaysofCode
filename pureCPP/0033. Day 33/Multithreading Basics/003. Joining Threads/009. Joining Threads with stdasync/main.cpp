#include <iostream>
#include <future>

int task() {
    std::cout << "Task running!" << std::endl;
    return 42;
}

int main() {
    std::future<int> result = std::async(task); // Create a thread with std::async

    // Accessing the result will wait for the thread to finish (implicitly join)
    std::cout << "Result: " << result.get() << std::endl;
    return 0;
}
