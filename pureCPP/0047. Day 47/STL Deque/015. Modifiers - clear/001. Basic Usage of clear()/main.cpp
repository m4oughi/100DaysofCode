#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    std::cout << "Size before clear: " << dq.size() << "\n";

    dq.clear();  // Remove all elements

    std::cout << "Size after clear: " << dq.size() << "\n";

    return 0;
}
