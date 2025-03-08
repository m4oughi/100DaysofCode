#include <iostream>
#include <deque>

int main() {
    std::deque<char> dq = {'A', 'B', 'C', 'D', 'E'};

    std::cout << "Deque elements: ";
    for (size_t i = 0; i < dq.size(); ++i)
        std::cout << dq[i] << " ";

    return 0;
}
