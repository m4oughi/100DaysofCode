#include <iostream>
#include <future>
#include <thread>

int computeFactorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    std::packaged_task<int(int)> task1(computeFactorial);
    std::packaged_task<int(int)> task2(computeFactorial);

    std::future<int> result1 = task1.get_future();
    std::future<int> result2 = task2.get_future();

    std::thread t1(std::move(task1), 5);  // Task 1: 5!
    std::thread t2(std::move(task2), 7);  // Task 2: 7!

    std::cout << "Factorial of 5: " << result1.get() << std::endl;
    std::cout << "Factorial of 7: " << result2.get() << std::endl;

    t1.join();  // Wait for task 1 to finish
    t2.join();  // Wait for task 2 to finish

    return 0;
}
