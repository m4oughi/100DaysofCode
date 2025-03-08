#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Pre-allocate memory by inserting placeholders
    dq.insert(dq.end(), 100, 0);

    std::cout << "Size after pre-allocation: " << dq.size() << std::endl;

    return 0;
}
