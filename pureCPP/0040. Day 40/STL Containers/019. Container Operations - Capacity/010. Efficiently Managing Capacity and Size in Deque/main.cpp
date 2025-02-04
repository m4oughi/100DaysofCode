#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3};

    std::cout << "Initial size: " << dq.size() << "\n"; // 3

    dq.resize(5, 50);  // Resize to 5 elements, initialize new elements with 50
    std::cout << "Resized size: " << dq.size() << "\n"; // 5
    std::cout << "Deque elements: ";
    for (int n : dq) std::cout << n << " ";  // 1 2 3 50 50

    return 0;
}
