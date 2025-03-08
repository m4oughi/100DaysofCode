#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30};

    // Resize to a larger size, filling new positions with default (0)
    dq.resize(5);

    std::cout << "After increasing size: ";
    for (int num : dq) std::cout << num << " ";

    // Resize to a smaller size, trimming extra elements
    dq.resize(2);

    std::cout << "\nAfter decreasing size: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
