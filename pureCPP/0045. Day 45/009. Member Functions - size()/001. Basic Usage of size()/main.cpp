#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    std::cout << "Initial size: " << q.size() << std::endl;  // 0

    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Size after push: " << q.size() << std::endl;  // 3

    return 0;
}
