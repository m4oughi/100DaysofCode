#include <iostream>
#include <future>
#include <thread>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    std::packaged_task<int(int, int)> task(multiply);  // Wrap function in packaged_task
    std::future<int> result = task.get_future();  // Get future from task

    std::thread t(std::move(task), 6, 7);  // Run task in separate thread
    t.join();

    std::cout << "Product: " << result.get() << std::endl;
    return 0;
}
