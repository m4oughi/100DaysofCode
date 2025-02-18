#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <chrono>

int main() {
    std::stack<int, std::vector<int>> vectorStack;
    std::stack<int, std::list<int>> listStack;
    
    const int N = 1000000;
    
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) vectorStack.push(i);
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Vector-based stack push time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) listStack.push(i);
    end = std::chrono::high_resolution_clock::now();
    std::cout << "List-based stack push time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    return 0;
}
