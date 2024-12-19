#include <iostream>
#include <future>
#include <thread>

int multiply(int a, int b) {
    return a * b;
}

int add(int a, int b) {
    return a + b;
}

int main() {
    std::packaged_task<int(int, int)> task1(multiply);
    std::packaged_task<int(int, int)> task2(add);

    std::future<int> result1 = task1.get_future();
    std::future<int> result2 = task2.get_future();

    std::thread t1(std::move(task1), 4, 5);  // Execute multiplication
    std::thread t2(std::move(task2), 7, 3);  // Execute addition

    // Combine the results from both tasks
    int finalResult = result1.get() + result2.get();
    std::cout << "Final result (multiply + add): " << finalResult << std::endl;

    t1.join();
    t2.join();

    return 0;
}
