#include <iostream>
#include <future>
#include <thread>

void calculate(int a, int b, std::promise<int>& prom1, std::promise<int>& prom2) {
    prom1.set_value(a + b);  // Sum
    prom2.set_value(a * b);  // Product
}

int main() {
    std::promise<int> promSum;
    std::promise<int> promProduct;
    
    std::future<int> futSum = promSum.get_future();
    std::future<int> futProduct = promProduct.get_future();

    // Launch a thread to perform both calculations
    std::thread t(calculate, 10, 20, std::ref(promSum), std::ref(promProduct));

    // Wait for and print the results
    std::cout << "Sum: " << futSum.get() << std::endl;       // Output: 30
    std::cout << "Product: " << futProduct.get() << std::endl; // Output: 200

    t.join();
    return 0;
}
