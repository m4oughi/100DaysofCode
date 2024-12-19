#include <iostream>
#include <future>
#include <thread>

int square(int x) {
    return x * x;
}

int main() {
    std::packaged_task<int(int)> task(square);  // Wrap function into packaged_task
    std::future<int> result = task.get_future();  // Get future to retrieve the result

    std::thread t(std::move(task), 5);  // Pass the task to a separate thread

    std::cout << "Square of 5: " << result.get() << std::endl;  // Retrieve the result

    t.join();  // Wait for the thread to finish
    return 0;
}
