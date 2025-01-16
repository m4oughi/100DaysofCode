#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    if (q.empty()) {
        std::cout << "The queue is empty.\n";
    }

    q.push(100);
    std::cout << "After pushing, is the queue empty? " << (q.empty() ? "Yes" : "No") << "\n";

    return 0;
}
