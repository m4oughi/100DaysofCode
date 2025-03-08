#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {5, 10, 15};

    std::cout << "Size of deque: " << dq.size() << "\n";
    dq.clear();
    std::cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << "\n";

    return 0;
}
