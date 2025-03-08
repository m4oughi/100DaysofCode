#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    std::cout << "Initial size: " << dq.size() << "\n";

    dq.resize(100);  // Resize to 100 elements
    std::cout << "Size after resize(100): " << dq.size() << "\n";

    dq.resize(50);  // Shrinking size to 50
    std::cout << "Size after resize(50): " << dq.size() << "\n";

    return 0;
}
