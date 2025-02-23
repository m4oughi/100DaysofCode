#include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>> pq; // Explicitly using std::vector

    pq.push(5);
    pq.push(15);
    pq.push(10);

    std::cout << "Top element: " << pq.top() << std::endl; // 15

    return 0;
}
