#include <iostream>
#include <future>
#include <thread>

void computeSum(std::promise<int>& prom) {
    int result = 10 + 5;
    prom.set_value(result);  // Set the result using the promise
}

int main() {
    std::promise<int> prom;  // Create a promise
    std::future<int> result = prom.get_future();  // Get the associated future

    std::thread t(computeSum, std::ref(prom));  // Run the function in a separate thread
    std::cout << "Result from promise: " << result.get() << std::endl;  // Retrieve the result

    t.join();  // Wait for the thread to finish
    return 0;
}
