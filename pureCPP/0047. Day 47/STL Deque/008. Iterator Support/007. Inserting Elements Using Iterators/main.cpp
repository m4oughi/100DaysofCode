#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 40, 50};

    auto it = dq.begin() + 2; // Insert at index 2
    dq.insert(it, 30);

    std::cout << "Deque after inserting: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
