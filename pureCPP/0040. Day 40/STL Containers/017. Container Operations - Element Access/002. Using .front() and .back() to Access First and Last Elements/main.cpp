#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {5, 15, 25, 35};

    std::cout << "Front element: " << dq.front() << "\n"; // 5
    std::cout << "Back element: " << dq.back() << "\n"; // 35

    return 0;
}
