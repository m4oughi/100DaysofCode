#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    std::cout << "Maximum possible size of deque: " << dq.max_size() << "\n";

    return 0;
}
