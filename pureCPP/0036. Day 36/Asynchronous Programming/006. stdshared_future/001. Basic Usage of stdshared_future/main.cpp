#include <iostream>
#include <future>
#include <thread>

int computeSum(int a, int b) {
    return a + b;
}

int main() {
    // Create a packaged_task and get the future
    std::packaged_task<int(int, int)> task(computeSum);
    std::future<int> result = task.get_future();

    // Create a shared_future from the regular future
    std::shared_future<int> sharedResult = result.share();

    std::thread t(std::move(task), 10, 20);  // Start the task in a separate thread

    // Use shared_future multiple times to access the result
    std::cout << "First access: " << sharedResult.get() << std::endl;
    std::cout << "Second access: " << sharedResult.get() << std::endl;

    t.join();  // Wait for the task to complete
    return 0;
}
