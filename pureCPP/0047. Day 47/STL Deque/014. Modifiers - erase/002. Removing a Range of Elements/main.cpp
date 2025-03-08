#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5, 6, 7};

    // Erase elements from index 2 to 4 (excluding index 5)
    dq.erase(dq.begin() + 2, dq.begin() + 5);

    std::cout << "Deque after erasing a range: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
