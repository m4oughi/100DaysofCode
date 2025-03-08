#include <iostream>
#include <deque>

int main() {
    std::deque<char> dq = {'A', 'B', 'C', 'D'};

    std::cout << "Reverse constant iteration: ";
    for (auto it = dq.crbegin(); it != dq.crend(); ++it)
        std::cout << *it << " ";

    return 0;
}
