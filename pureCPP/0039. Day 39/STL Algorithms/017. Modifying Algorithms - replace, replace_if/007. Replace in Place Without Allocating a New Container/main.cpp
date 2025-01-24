#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> deq = {1, 2, 2, 3, 4, 2};

    std::replace(deq.begin(), deq.end(), 2, 99);

    std::cout << "After in-place replace: ";
    for (int num : deq) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
