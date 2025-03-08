#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    dq.emplace_back(10);
    dq.emplace_back(20);
    dq.emplace_back(30);

    std::cout << "Deque after emplace_back: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
