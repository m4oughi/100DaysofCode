#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Pushing elements at the back and front
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    // Display elements
    std::cout << "Deque elements: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    // Removing elements from both ends
    dq.pop_back();
    dq.pop_front();

    // Display updated deque
    std::cout << "Deque after pop operations: ";
    for (int num : dq) std::cout << num << " ";
}
