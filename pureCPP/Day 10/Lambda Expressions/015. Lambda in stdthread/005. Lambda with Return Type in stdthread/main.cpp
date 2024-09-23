#include <iostream>
#include <thread>
#include <future>

int main() {
    std::promise<int> promise;
    std::future<int> future = promise.get_future();

    std::thread t([&promise]() {
        promise.set_value(42);
    });

    std::cout << "Value: " << future.get() << std::endl; // Outputs: Value: 42
    t.join(); // Waits for the thread to finish

    return 0;
}
