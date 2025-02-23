#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    pq.push(15);
    pq.push(10);
    pq.push(30);
    pq.push(20);

    std::cout << "Elements in descending order:\n";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
