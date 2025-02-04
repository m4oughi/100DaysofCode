#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    // Reverse the deque
    std::reverse(dq.begin(), dq.end());

    for (int i : dq) std::cout << i << " ";

    return 0;
}
