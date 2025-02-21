#include <iostream>
#include <queue>
#include <list>

int main() {
    std::queue<int, std::list<int>> q;  // Using std::list instead of std::deque

    q.push(100);
    q.push(200);
    q.push(300);

    std::cout << "Front: " << q.front() << ", Back: " << q.back() << std::endl;

    return 0;
}
