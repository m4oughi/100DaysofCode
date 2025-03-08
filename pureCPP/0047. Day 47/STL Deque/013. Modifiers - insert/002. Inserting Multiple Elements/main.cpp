#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 5, 6};

    // Create another deque
    std::deque<int> newElements = {3, 4};

    // Insert multiple elements at index 2
    dq.insert(dq.begin() + 2, newElements.begin(), newElements.end());

    std::cout << "Deque after inserting multiple elements: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
