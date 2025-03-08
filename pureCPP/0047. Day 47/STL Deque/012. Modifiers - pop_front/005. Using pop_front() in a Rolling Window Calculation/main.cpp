#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;
    int windowSize = 3;
    int sum = 0;

    for (int i = 1; i <= 5; ++i) {
        dq.push_back(i * 10);
        sum += i * 10;

        if (dq.size() > windowSize) {
            sum -= dq.front(); // Subtract the removed element
            dq.pop_front();
        }

        std::cout << "Deque: ";
        for (int num : dq) std::cout << num << " ";
        std::cout << " | Moving Average: " << (sum / dq.size()) << "\n";
    }

    return 0;
}
