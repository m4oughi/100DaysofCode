#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};
    int size = dq.size();

    std::cout << "Circular buffer simulation:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << "Element at " << i << " (circular index): " << dq[i % size] << "\n";
    }

    return 0;
}
