#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 4, 5};

    // Insert 3 at the third position (index 2)
    dq.insert(dq.begin() + 2, 3);

    std::cout << "Deque after insertion: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
