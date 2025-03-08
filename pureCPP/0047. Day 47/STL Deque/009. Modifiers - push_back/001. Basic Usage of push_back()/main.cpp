#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Adding elements at the back
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    std::cout << "Deque elements: ";
    for (int num : dq)
        std::cout << num << " ";

    return 0;
}
