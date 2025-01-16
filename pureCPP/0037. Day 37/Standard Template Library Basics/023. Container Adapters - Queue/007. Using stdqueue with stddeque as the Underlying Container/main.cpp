#include <iostream>
#include <queue>
#include <deque>

int main() {
    std::queue<int, std::deque<int>> q;

    q.push(10);
    q.push(20);

    std::cout << "Front element: " << q.front() << "\n";
    std::cout << "Back element: " << q.back() << "\n";

    return 0;
}
