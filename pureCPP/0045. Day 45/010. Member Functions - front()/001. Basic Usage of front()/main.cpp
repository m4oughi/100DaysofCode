#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Front element: " << q.front() << std::endl;  // 10

    return 0;
}
