#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> dq = {1, 3, 5, 7, 9};

    std::cout << "Deque elements: ";
    std::for_each(dq.begin(), dq.end(), [](int num) {
        std::cout << num << " ";
    });

    return 0;
}
