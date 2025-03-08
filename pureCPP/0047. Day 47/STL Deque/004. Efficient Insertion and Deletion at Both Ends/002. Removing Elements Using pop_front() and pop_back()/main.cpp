#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    dq.pop_front(); // Removes 1
    dq.pop_back();  // Removes 5

    std::cout << "Deque after popping elements: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
