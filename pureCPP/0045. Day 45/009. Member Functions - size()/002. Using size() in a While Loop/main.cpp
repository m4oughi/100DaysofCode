#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (q.size() > 0) {
        std::cout << "Processing: " << q.front() << ", Queue Size: " << q.size() << std::endl;
        q.pop();
    }

    std::cout << "Final size: " << q.size() << std::endl;  // 0

    return 0;
}
