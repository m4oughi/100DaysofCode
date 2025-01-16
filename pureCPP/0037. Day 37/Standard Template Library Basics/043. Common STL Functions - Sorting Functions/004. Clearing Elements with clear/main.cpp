#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30};

    dq.clear(); // Remove all elements
    std::cout << "After clear, size: " << dq.size() << "\n";

    return 0;
}
