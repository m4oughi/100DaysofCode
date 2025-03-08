#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    for (int i = 1; i <= 100; ++i) {
        dq.push_back(i);
        std::cout << "Size: " << dq.size() << std::endl;
    }

    return 0;
}
