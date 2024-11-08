#include <iostream>
#include <thread>
#include <future>

int main() {
    std::packaged_task<int()> task([]() {
        return 42; // Lambda returns a value
    });
    
    std::future<int> result = task.get_future();
    std::thread t(std::move(task)); // Move the task to the thread
    t.join();
    
    std::cout << "Result from lambda: " << result.get() << std::endl;
    return 0;
}
