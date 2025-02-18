#include <iostream>
#include <stack>
#include <deque>
#include <vector>
#include <list>
#include <chrono>

template<typename T>
void testPerformance(T& stack) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100000; ++i) {
        stack.push(i);
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Push Time: "
              << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
              << " ms\n";
}

int main() {
    std::stack<int, std::deque<int>> stackDeque;
    std::stack<int, std::vector<int>> stackVector;
    std::stack<int, std::list<int>> stackList;

    std::cout << "Deque-based Stack: "; testPerformance(stackDeque);
    std::cout << "Vector-based Stack: "; testPerformance(stackVector);
    std::cout << "List-based Stack: "; testPerformance(stackList);

    return 0;
}
