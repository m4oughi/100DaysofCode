#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    if (q.empty()) {
        std::cout << "Queue is empty" << std::endl;
    }

    q.push(100);
    q.push(200);

    std::cout << "Queue size: " << q.size() << std::endl;  // 2

    return 0;
}
