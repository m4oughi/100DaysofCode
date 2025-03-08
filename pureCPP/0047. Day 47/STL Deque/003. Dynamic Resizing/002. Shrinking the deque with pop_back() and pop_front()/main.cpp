#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    // Removing elements from front and back
    dq.pop_front();
    dq.pop_back();

    std::cout << "Deque after pops: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
