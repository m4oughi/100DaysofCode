#include <iostream>
#include <deque>
#include <vector>
#include <chrono>

int main() {
    const int N = 1000000;
    
    std::deque<int> dq;
    std::vector<int> vec;

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i)
        dq.push_back(i);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Time for deque: " 
              << std::chrono::duration<double>(end - start).count() 
              << " seconds\n";

    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i)
        vec.push_back(i);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "Time for vector: " 
              << std::chrono::duration<double>(end - start).count() 
              << " seconds\n";

    return 0;
}
