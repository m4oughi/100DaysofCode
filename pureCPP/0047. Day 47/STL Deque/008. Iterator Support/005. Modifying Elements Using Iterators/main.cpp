#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    std::cout << "Original deque: ";
    for (int num : dq) std::cout << num << " ";

    // Doubling each element using iterators
    for (auto it = dq.begin(); it != dq.end(); ++it)
        *it *= 2;

    std::cout << "\nModified deque: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
