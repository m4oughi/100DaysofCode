#include <iostream>
#include <queue>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3};
    std::queue<int, std::deque<int>> q(dq);

    std::cout << "Front: " << q.front() << std::endl;  // 1
    std::cout << "Back: " << q.back() << std::endl;    // 3

    return 0;
}
