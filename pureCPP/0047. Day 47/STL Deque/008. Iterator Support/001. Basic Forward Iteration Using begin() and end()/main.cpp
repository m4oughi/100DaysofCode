#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    std::cout << "Deque elements: ";
    for (auto it = dq.begin(); it != dq.end(); ++it)
        std::cout << *it << " ";

    return 0;
}
