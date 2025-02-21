#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    if (q.empty()) {
        std::cout << "Queue is empty. Adding elements...\n";
    }

    q.push(100);
    std::cout << "Element pushed: " << q.back() << std::endl;

    return 0;
}
