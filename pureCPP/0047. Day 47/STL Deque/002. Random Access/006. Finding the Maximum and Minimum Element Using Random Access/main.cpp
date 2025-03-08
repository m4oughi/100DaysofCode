#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> dq = {12, 45, 7, 89, 23};

    int maxElement = *std::max_element(dq.begin(), dq.end());
    int minElement = *std::min_element(dq.begin(), dq.end());

    std::cout << "Maximum element: " << maxElement << "\n";
    std::cout << "Minimum element: " << minElement << "\n";

    return 0;
}
