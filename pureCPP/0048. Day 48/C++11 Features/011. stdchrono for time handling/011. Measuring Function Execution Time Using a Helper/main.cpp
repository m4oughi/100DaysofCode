#include <iostream>
#include <chrono>

template <typename Func>
void measureExecutionTime(Func func) {
    auto start = std::chrono::high_resolution_clock::now();
    
    func();

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);

    std::cout << "Execution time: " << duration.count() << " microseconds\n";
}

void exampleTask() {
    for (volatile int i = 0; i < 1000000; ++i); // Simulated work
}

int main() {
    measureExecutionTime(exampleTask);

    return 0;
}
