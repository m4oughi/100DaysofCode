#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Add elements at the back and front
    dq.push_back(10);
    dq.push_front(20);
    dq.push_back(30);

    for (int i : dq) std::cout << i << " ";
    std::cout << "\n";

    // Remove elements from the back and front
    dq.pop_front();
    dq.pop_back();

    for (int i : dq) std::cout << i << " ";

    return 0;
}
