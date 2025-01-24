#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> deq = {10, 20, 30, 40, 50};

    std::reverse(deq.begin(), deq.end());

    std::cout << "Deque after reverse: ";
    for (int num : deq) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
