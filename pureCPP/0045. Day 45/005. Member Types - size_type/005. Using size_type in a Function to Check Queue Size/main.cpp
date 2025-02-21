#include <iostream>
#include <queue>

void printQueueSize(const std::queue<int>& q) {
    std::queue<int>::size_type size = q.size();
    std::cout << "Queue contains " << size << " elements.\n";
}

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    printQueueSize(q);

    return 0;
}
