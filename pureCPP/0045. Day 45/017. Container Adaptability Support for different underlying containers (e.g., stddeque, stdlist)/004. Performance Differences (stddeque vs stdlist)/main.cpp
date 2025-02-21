#include <iostream>
#include <queue>
#include <deque>
#include <list>
#include <chrono>

int main() {
    const int N = 100000;

    std::queue<int, std::deque<int>> dq_queue;
    std::queue<int, std::list<int>> list_queue;

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        dq_queue.push(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "std::deque push time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < N; ++i) {
        list_queue.push(i);
    }
    end = std::chrono::high_resolution_clock::now();
    std::cout << "std::list push time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";

    return 0;
}
