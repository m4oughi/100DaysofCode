#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    std::cout << "Initial size: " << dq.size() << std::endl;

    dq.push_back(10);
    dq.push_back(20);

    std::cout << "Size after inserting two elements: " << dq.size() << std::endl;

    return 0;
}
