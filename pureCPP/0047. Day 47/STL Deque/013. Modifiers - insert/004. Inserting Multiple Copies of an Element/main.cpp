#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 40};

    // Insert three copies of 30 at index 2
    dq.insert(dq.begin() + 2, 3, 30);

    std::cout << "Deque after inserting multiple copies: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
