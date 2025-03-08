#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    dq.erase(dq.begin() + 2); // Remove the element at index 2 (30)

    std::cout << "Deque after erasing index 2: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
