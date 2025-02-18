#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>
#include <chrono>

const int N = 1000000;

template <typename Container>
void measurePushPerformance(const std::string& containerName) {
    std::stack<int, Container> s;
    auto start = std::chrono::high_resolution_clock::now();
    
    for (int i = 0; i < N; ++i) {
        s.push(i);
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << containerName << " push time: " 
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() 
              << " ms\n";
}

int main() {
    measurePushPerformance<std::deque<int>>("Deque");
    measurePushPerformance<std::vector<int>>("Vector");
    measurePushPerformance<std::list<int>>("List");

    return 0;
}
