#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {100, 200, 300, 400, 500};

    std::cout << "Original deque: ";
    for (int num : dq) std::cout << num << " ";

    dq.pop_front(); // Remove 100
    dq.pop_back();  // Remove 500

    std::cout << "\nAfter pop_front and pop_back: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
