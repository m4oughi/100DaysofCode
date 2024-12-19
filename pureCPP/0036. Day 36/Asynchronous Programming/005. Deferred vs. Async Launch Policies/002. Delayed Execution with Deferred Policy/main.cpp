#include <iostream>
#include <future>
#include <thread>

int computeSum(int a, int b) {
    std::cout << "Computing sum...\n";
    return a + b;
}

int main() {
    // Using std::launch::deferred (task will not run until get() is called)
    std::future<int> result = std::async(std::launch::deferred, computeSum, 5, 7);

    std::cout << "Deferred task created. Now calling get()...\n";
    std::cout << "Result: " << result.get() << std::endl;  // Task runs when result.get() is called

    return 0;
}
