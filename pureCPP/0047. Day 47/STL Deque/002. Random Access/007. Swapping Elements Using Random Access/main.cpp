#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    std::swap(dq[1], dq[3]);

    std::cout << "Deque after swapping: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
