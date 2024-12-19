#include <iostream>
#include <future>
#include <thread>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    std::packaged_task<int(int)> task(fibonacci);
    std::shared_future<int> result = task.get_future().share();  // Shared future

    std::thread t(std::move(task), 10);  // Run Fibonacci calculation in a separate thread

    // Multiple consumers can access the same result
    std::cout << "Fibonacci of 10 (Consumer 1): " << result.get() << std::endl;
    std::cout << "Fibonacci of 10 (Consumer 2): " << result.get() << std::endl;

    t.join();  // Wait for the thread to finish
    return 0;
}
