#include <iostream>
#include <queue>
#include <deque>

int main() {
    std::deque<std::string> d = {"Alice", "Bob", "Charlie"};
    std::queue<std::string> q(d);  // Construct queue from deque

    std::cout << "Front of queue: " << q.front() << std::endl;  // Alice

    return 0;
}
