#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40};

    std::cout << "Before pop_back: ";
    for (int num : dq) std::cout << num << " ";

    dq.pop_back(); // Remove the last element

    std::cout << "\nAfter pop_back: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
