#include <iostream>
#include <chrono>
#include <thread>

void someTask() {
    std::this_thread::sleep_for(std::chrono::milliseconds(500)); // Simulating a delay
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    
    someTask();

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "Execution time: " << duration.count() << " ms\n";

    return 0;
}
