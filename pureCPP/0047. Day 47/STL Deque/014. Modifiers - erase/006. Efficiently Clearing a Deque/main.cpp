#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    // Remove all elements
    dq.erase(dq.begin(), dq.end());

    std::cout << "Deque size after clearing: " << dq.size() << "\n";

    return 0;
}
