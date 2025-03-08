#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    std::cout << "Before assign: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    dq.assign(4, 10); // Assigning 4 elements with value 10

    std::cout << "After assign(4, 10): ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
