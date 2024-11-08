#include <iostream>
#include <thread>
#include <chrono>

void heavyComputation() {
    std::cout << "Computation started..." << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(3)); // Simulate heavy computation
    std::cout << "Computation finished!" << std::endl;
}

int main() {
    std::thread t1(heavyComputation);
    t1.join(); // Wait for the thread to complete
    return 0;
}
