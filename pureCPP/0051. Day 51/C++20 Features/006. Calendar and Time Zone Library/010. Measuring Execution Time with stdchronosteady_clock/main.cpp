#include <iostream>
#include <chrono>
#include <thread>

void long_computation() {
    std::this_thread::sleep_for(std::chrono::seconds(2)); // Simulate work
}

int main() {
    using namespace std::chrono;

    auto start = steady_clock::now();
    long_computation();
    auto end = steady_clock::now();

    std::cout << "Execution time: " 
              << duration_cast<milliseconds>(end - start).count() << " ms\n";
}
