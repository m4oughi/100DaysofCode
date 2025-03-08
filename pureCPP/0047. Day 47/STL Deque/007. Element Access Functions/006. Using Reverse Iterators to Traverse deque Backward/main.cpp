#include <iostream>
#include <deque>

int main() {
    std::deque<char> dq = {'A', 'B', 'C', 'D', 'E'};

    std::cout << "Deque in reverse order: ";
    for (auto it = dq.rbegin(); it != dq.rend(); ++it)
        std::cout << *it << " ";

    return 0;
}
