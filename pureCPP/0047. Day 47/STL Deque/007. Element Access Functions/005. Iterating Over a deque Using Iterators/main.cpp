#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {5, 10, 15, 20, 25};

    std::cout << "Deque elements: ";
    for (auto it = dq.begin(); it != dq.end(); ++it)
        std::cout << *it << " ";

    return 0;
}
