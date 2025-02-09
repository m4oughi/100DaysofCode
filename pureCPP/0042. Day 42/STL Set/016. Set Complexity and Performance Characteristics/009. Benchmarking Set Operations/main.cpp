#include <iostream>
#include <set>
#include <chrono>

int main() {
    std::set<int> s;
    
    // Insertion Benchmark
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000000; i++) s.insert(i);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Insertion Time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";

    // Find Benchmark
    start = std::chrono::high_resolution_clock::now();
    s.find(500000);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Find Time: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()
              << " ns\n";

    // Deletion Benchmark
    start = std::chrono::high_resolution_clock::now();
    s.erase(500000);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Erase Time: " 
              << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count()
              << " ns\n";

    return 0;
}
