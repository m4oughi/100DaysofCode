#include <iostream>
#include <queue>
#include <deque>

int main() {
    std::deque<int> dq = {5, 10, 15};
    std::queue<int, std::deque<int>> q(dq);

    std::cout << "Front: " << q.front() << std::endl;  // 5
    std::cout << "Back: " << q.back() << std::endl;    // 15

    return 0;
}
