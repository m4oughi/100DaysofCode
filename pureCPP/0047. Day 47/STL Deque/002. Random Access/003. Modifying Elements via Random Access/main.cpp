#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    // Modifying elements
    dq[1] = 20;
    dq.at(3) = 40;

    // Display updated deque
    std::cout << "Updated deque: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
