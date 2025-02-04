#include <iostream>
#include <queue>

void printQueue(std::queue<int> q) { // Pass by value to avoid modifying the original queue
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << "\n";
}

int main() {
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    printQueue(q); // Output: 10 20 30

    return 0;
}
