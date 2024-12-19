#include <iostream>
#include <future>
#include <thread>
#include <vector>

void computeSum(std::promise<int>& prom, int a, int b) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    prom.set_value(a + b);  // Set the sum result
}

void computeProduct(std::promise<int>& prom, int a, int b) {
    std::this_thread::sleep_for(std::chrono::seconds(1));  // Simulate work
    prom.set_value(a * b);  // Set the product result
}

int main() {
    std::promise<int> sumProm, prodProm;  // Create two promises
    std::future<int> sumFut = sumProm.get_future();  // Get future for sum
    std::future<int> prodFut = prodProm.get_future();  // Get future for product

    // Launch two threads for computation
    std::thread t1(computeSum, std::ref(sumProm), 5, 3);
    std::thread t2(computeProduct, std::ref(prodProm), 5, 3);

    // Wait for both futures to get results
    std::cout << "Sum: " << sumFut.get() << std::endl;  // Output: 8
    std::cout << "Product: " << prodFut.get() << std::endl;  // Output: 15

    t1.join();
    t2.join();

    return 0;
}
