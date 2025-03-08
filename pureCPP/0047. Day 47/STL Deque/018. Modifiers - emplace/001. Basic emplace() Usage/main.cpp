#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 4, 5};

    std::cout << "Before emplace: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    dq.emplace(dq.begin() + 2, 3); // Insert 3 at index 2

    std::cout << "After emplace(2, 3): ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
