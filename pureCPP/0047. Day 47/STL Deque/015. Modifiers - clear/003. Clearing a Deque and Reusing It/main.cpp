#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    dq.clear();  // Remove all elements

    // Reusing deque
    dq.push_back(10);
    dq.push_back(20);

    std::cout << "Deque after reusing: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
