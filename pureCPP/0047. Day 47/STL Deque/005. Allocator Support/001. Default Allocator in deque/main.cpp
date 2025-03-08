#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    std::cout << "Deque elements: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
