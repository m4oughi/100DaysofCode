#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::vector<int> v = {5, 10, 15, 20};
    std::deque<int> d(v.begin(), v.end());  // Convert vector to deque

    std::queue<int> q(d);  // Construct queue from deque

    std::cout << "Front element: " << q.front() << std::endl;  // 5

    return 0;
}
