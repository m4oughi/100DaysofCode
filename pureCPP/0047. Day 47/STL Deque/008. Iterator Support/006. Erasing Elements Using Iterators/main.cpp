#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    auto it = dq.begin() + 2; // Points to element 30
    dq.erase(it); // Remove element at index 2

    std::cout << "Deque after erasing: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
