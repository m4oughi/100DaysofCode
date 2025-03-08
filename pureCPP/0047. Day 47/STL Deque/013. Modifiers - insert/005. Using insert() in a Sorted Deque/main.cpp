#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> dq = {10, 20, 30, 50, 60};

    // Find the correct position for 40
    auto pos = std::lower_bound(dq.begin(), dq.end(), 40);

    // Insert 40 in the sorted position
    dq.insert(pos, 40);

    std::cout << "Sorted deque after insertion: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
