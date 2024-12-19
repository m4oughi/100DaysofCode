#include <iostream>
#include <future>
#include <thread>

void calculate(int a, int b, std::promise<int>& prom) {
    int result = a * b;
    prom.set_value(result);
}

int main() {
    std::promise<int> prom;
    std::shared_future<int> fut = prom.get_future();  // Create shared future

    // Launch a thread to perform the calculation
    std::thread t(calculate, 6, 7, std::ref(prom));

    // Multiple consumers can share the same future
    std::cout << "First consumer result: " << fut.get() << std::endl;  // Output: 42
    std::cout << "Second consumer result: " << fut.get() << std::endl;  // Output: 42

    t.join();
    return 0;
}
