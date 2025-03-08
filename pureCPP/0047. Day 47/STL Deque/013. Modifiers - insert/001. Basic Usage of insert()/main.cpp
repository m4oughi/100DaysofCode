#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40};

    // Insert 25 at the second position (index 1)
    dq.insert(dq.begin() + 1, 25);

    std::cout << "Deque after insertion: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
