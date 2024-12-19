#include <iostream>
#include <future>
#include <thread>

void calculateResult(std::promise<int>& prom) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate a delay
    prom.set_value(10 + 20);  // Set the result in the promise
}

int main() {
    std::promise<int> prom;
    std::shared_future<int> result = prom.get_future().share();  // Shared future allows multiple consumers

    std::thread t(calculateResult, std::ref(prom));  // Start the computation in a thread

    std::cout << "Consumer 1: " << result.get() << std::endl;  // Consumer 1 accesses the result
    std::cout << "Consumer 2: " << result.get() << std::endl;  // Consumer 2 accesses the same result

    t.join();  // Wait for the thread to finish
    return 0;
}
