#include <iostream>
#include <future>

int add(int a, int b) {
    return a + b;
}

int main() {
    std::packaged_task<int(int, int)> task(add);  // Wrap function into packaged_task
    std::future<int> result = task.get_future();  // Get future to retrieve the result

    task(3, 4);  // Execute the task synchronously on the current thread

    std::cout << "Result of addition: " << result.get() << std::endl;  // Retrieve and print the result
    return 0;
}
