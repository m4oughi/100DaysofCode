#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30};

    // Insert at second position
    dq.insert(dq.begin() + 1, 15);

    std::cout << "Deque after insertion: ";
    for (int num : dq) std::cout << num << " ";

    // Erase second element
    dq.erase(dq.begin() + 1);

    std::cout << "\nDeque after erasure: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
