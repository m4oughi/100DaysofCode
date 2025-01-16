#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};
    dq.push_front(0); // Insert at front
    dq.push_back(6);  // Insert at back
    dq.pop_front();   // Remove from front

    for (int num : dq) {
        std::cout << num << " ";
    }
    return 0;
}
