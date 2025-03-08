#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> dq = {10, 10, 20, 30, 30, 30, 40, 50, 50};

    // Remove consecutive duplicates
    dq.erase(std::unique(dq.begin(), dq.end()), dq.end());

    std::cout << "Deque after removing duplicates: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
