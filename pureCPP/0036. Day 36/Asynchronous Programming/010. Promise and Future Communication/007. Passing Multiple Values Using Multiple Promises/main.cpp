#include <iostream>
#include <future>
#include <thread>

void computeSumAndProduct(std::promise<int>& sumProm, std::promise<int>& prodProm, int a, int b) {
    sumProm.set_value(a + b);  // Set sum
    prodProm.set_value(a * b); // Set product
}

int main() {
    std::promise<int> sumProm, prodProm;
    std::future<int> sumFut = sumProm.get_future();
    std::future<int> prodFut = prodProm.get_future();

    // Launch computation
    std::thread t(computeSumAndProduct, std::ref(sumProm), std::ref(prodProm), 6, 7);

    // Wait for results
    std::cout << "Sum: " << sumFut.get() << std::endl;   // Output: 13
    std::cout << "Product: " << prodFut.get() << std::endl; // Output: 42

    t.join();
    return 0;
}
