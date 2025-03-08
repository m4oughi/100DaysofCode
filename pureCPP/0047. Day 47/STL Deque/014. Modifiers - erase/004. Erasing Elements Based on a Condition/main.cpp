#include <iostream>
#include <deque>
#include <algorithm>

int main() {
    std::deque<int> dq = {10, 15, 20, 25, 30, 35};

    // Remove even numbers
    dq.erase(std::remove_if(dq.begin(), dq.end(), [](int x) { return x % 2 == 0; }), dq.end());

    std::cout << "Deque after removing even numbers: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
