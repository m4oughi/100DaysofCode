#include <iostream>
#include <deque>

int main() {
    std::deque<int> queue;
    queue.push_back(10);
    queue.push_back(20);
    queue.push_back(30);

    while (!queue.empty()) {
        std::cout << queue.front() << " ";
        queue.pop_front();
    }
    return 0;
}
