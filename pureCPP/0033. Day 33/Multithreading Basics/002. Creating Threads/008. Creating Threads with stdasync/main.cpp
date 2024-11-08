#include <iostream>
#include <future>

int calculateProduct(int a, int b) {
    return a * b;
}

int main() {
    std::future<int> result = std::async(calculateProduct, 4, 5); // Automatically creates a thread
    std::cout << "Product: " << result.get() << std::endl; // Retrieve result once thread finishes
    return 0;
}
