#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40};

    dq.emplace(dq.begin(), 5);       // Insert at the front
    dq.emplace(dq.end(), 50);        // Insert at the back
    dq.emplace(dq.begin() + 2, 25);  // Insert at index 2

    std::cout << "Deque after multiple emplaces: ";
    for (int num : dq) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}
