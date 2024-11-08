#include <iostream>
#include <thread>
#include <functional>

void multiply(int a, int b) {
    std::cout << "Product: " << a * b << std::endl;
}

int main() {
    auto boundFunction = std::bind(multiply, 6, 7); // Binding arguments
    std::thread t(boundFunction);
    t.join();
    
    return 0;
}
