#include <iostream>
#include <future>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    std::packaged_task<int(int, int)> task(multiply);
    std::future<int> result = task.get_future();

    task(5, 6); // Execute task manually

    std::cout << "Result: " << result.get() << "\n";
    return 0;
}
