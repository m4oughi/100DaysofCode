#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5, 6, 7};

    dq.erase(dq.begin() + 1, dq.begin() + 4); // Remove elements from index 1 to 3

    std::cout << "Deque after range erase: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
