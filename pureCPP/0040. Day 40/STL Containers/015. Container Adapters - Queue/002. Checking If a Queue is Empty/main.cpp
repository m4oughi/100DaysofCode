#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    if (q.empty()) {
        std::cout << "Queue is empty!\n";
    }

    q.push(42);

    if (!q.empty()) {
        std::cout << "Queue is not empty!\n";
    }

    return 0;
}
