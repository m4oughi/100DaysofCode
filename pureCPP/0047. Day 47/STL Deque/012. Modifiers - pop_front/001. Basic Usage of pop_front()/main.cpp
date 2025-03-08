#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    std::cout << "Before pop_front(): ";
    for (int num : dq) std::cout << num << " ";

    dq.pop_front(); // Removes the first element

    std::cout << "\nAfter pop_front(): ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
