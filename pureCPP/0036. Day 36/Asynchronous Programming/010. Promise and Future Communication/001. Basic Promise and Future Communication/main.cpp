#include <iostream>
#include <future>
#include <thread>

void calculateSquare(std::promise<int>& prom, int value) {
    // Calculate the square of the value and set it in the promise
    int result = value * value;
    prom.set_value(result);
}

int main() {
    std::promise<int> prom;  // Create a promise
    std::future<int> fut = prom.get_future();  // Get a future associated with the promise

    // Launch a thread to calculate the square of a number
    std::thread t(calculateSquare, std::ref(prom), 5);

    // Wait for the result from the future
    int result = fut.get();
    std::cout << "The square of the number is: " << result << std::endl;  // Output: 25

    t.join();
    return 0;
}
