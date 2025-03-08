#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    // Erase the element at index 2 (third element)
    dq.erase(dq.begin() + 2);

    std::cout << "Deque after erasing an element: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
