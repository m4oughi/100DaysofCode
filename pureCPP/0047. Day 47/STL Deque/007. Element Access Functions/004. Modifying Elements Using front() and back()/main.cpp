#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    dq.front() = 100;
    dq.back() = 500;

    std::cout << "Modified deque: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
