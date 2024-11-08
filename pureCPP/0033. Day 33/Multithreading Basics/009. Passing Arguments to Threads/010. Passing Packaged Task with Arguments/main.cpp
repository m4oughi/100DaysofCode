#include <iostream>
#include <thread>
#include <future>

int add(int a, int b) {
    return a + b;
}

int main() {
    std::packaged_task<int(int, int)> task(add);
    std::future<int> result = task.get_future();
    
    std::thread t(std::move(task), 5, 10); // Passing packaged task with arguments
    t.join();
    
    std::cout << "Result from thread: " << result.get() << std::endl;
    return 0;
}
