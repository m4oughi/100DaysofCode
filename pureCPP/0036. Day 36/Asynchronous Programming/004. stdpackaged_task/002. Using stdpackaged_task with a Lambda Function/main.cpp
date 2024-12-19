#include <iostream>
#include <future>

int main() {
    std::packaged_task<int(int, int)> task([](int a, int b) { return a * b; });  // Using lambda function
    std::future<int> result = task.get_future();  // Get future to retrieve the result

    task(6, 7);  // Execute the task

    std::cout << "Result of multiplication: " << result.get() << std::endl;  // Retrieve and print the result
    return 0;
}
