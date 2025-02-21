#include <iostream>
#include <deque>
#include <queue>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};
    std::queue<int, std::deque<int>> q(dq); // Initialize queue with deque

    std::cout << "Accessing elements using deque: ";
    for (int i = 0; i < dq.size(); ++i) {
        std::cout << dq[i] << " ";  // Random access works
    }
    std::cout << std::endl;

    return 0;
}
