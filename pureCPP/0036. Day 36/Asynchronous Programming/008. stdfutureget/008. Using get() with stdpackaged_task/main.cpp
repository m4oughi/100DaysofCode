#include <iostream>
#include <future>
#include <thread>

int subtract(int a, int b) {
    return a - b;
}

int main() {
    std::packaged_task<int(int, int)> task(subtract); // Create a packaged task
    std::future<int> result = task.get_future();      // Get the associated future

    // Launch the task in a separate thread
    std::thread t(std::move(task), 10, 3);  // Executes subtract(10, 3)

    // Wait and get the result from the future
    std::cout << "Subtraction result: " << result.get() << std::endl;  // Result is 7

    t.join();  // Ensure the thread finishes before main exits
    return 0;
}
