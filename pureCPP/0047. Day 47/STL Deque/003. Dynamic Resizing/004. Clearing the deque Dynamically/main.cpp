#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    std::cout << "Size before clear: " << dq.size() << "\n";

    dq.clear();

    std::cout << "Size after clear: " << dq.size() << "\n";
    std::cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << "\n";

    return 0;
}
