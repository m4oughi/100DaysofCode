#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    std::cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << "\n"; // Yes

    dq.push_back(10);
    std::cout << "Is deque empty now? " << (dq.empty() ? "Yes" : "No") << "\n"; // No

    return 0;
}
