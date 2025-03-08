#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    std::cout << "Initial size: " << dq.size() << "\n";

    dq.push_back(100);
    dq.push_back(200);
    dq.push_front(50);

    std::cout << "Size after insertions: " << dq.size() << "\n";

    dq.pop_back();
    dq.pop_front();

    std::cout << "Size after deletions: " << dq.size() << "\n";

    return 0;
}
