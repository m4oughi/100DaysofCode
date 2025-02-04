#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    // Insert at specific position
    dq.insert(dq.begin() + 2, 25);

    // Erase element at specific position
    dq.erase(dq.begin() + 4);

    for (int i : dq) std::cout << i << " ";

    return 0;
}
