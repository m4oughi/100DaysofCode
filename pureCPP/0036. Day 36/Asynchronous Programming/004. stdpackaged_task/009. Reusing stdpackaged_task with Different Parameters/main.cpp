#include <iostream>
#include <future>
#include <thread>

int calculateSquare(int n) {
    return n * n;
}

int main() {
    std::packaged_task<int(int)> task(calculateSquare);
    std::future<int> result1 = task.get_future();
    std::thread t1(std::move(task), 5);  // First execution

    std::cout << "Square of 5: " << result1.get() << std::endl;

    std::packaged_task<int(int)> task2(calculateSquare);
    std::future<int> result2 = task2.get_future();
    std::thread t2(std::move(task2), 6);  // Reusing the task with new arguments

    std::cout << "Square of 6: " << result2.get() << std::endl;

    t1.join();
    t2.join();

    return 0;
}
