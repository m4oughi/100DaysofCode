#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;
    int windowSize = 3;

    for (int i = 1; i <= 5; ++i) {
        dq.push_back(i * 10);

        if (dq.size() > windowSize)
            dq.pop_front(); // Remove front element to maintain window size

        std::cout << "Current deque: ";
        for (int num : dq)
            std::cout << num << " ";
        std::cout << "\n";
    }

    return 0;
}
