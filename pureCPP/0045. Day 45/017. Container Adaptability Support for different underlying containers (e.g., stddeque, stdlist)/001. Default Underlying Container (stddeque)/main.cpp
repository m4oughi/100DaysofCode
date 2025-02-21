#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;  // Uses std::deque<int> by default

    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Front: " << q.front() << ", Back: " << q.back() << std::endl;

    return 0;
}
