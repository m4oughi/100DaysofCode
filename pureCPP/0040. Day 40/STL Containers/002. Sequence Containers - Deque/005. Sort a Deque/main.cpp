#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> dq = {40, 10, 30, 20, 50};

    // Sort in ascending order
    std::sort(dq.begin(), dq.end());

    for (int i : dq) std::cout << i << " ";
    std::cout << "\n";

    // Sort in descending order
    std::sort(dq.begin(), dq.end(), std::greater<int>());

    for (int i : dq) std::cout << i << " ";

    return 0;
}
