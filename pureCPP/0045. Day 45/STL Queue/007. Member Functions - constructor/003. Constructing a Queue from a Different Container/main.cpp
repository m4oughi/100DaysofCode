#include <iostream>
#include <queue>
#include <deque>

int main() {
    std::deque<int> d = {1, 2, 3, 4, 5};
    std::queue<int, std::deque<int>> q(d);  // Constructing queue from deque

    std::cout << "Front of queue: " << q.front() << std::endl;  // 1

    return 0;
}
