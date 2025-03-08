#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    std::cout << "Deque elements: ";
    while (!dq.empty()) {
        std::cout << dq.back() << " ";
        dq.pop_back();
    }

    return 0;
}
