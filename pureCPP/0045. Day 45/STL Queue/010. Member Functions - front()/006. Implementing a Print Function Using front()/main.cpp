#include <iostream>
#include <queue>

void printQueue(std::queue<int> q) {  // Passed by value to keep original queue unchanged
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Queue elements: ";
    printQueue(q);

    return 0;
}
