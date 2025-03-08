#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    dq.assign(7, 100); // Resize to 7 and fill with 100

    std::cout << "Deque after assign: ";
    for (int num : dq) std::cout << num << " ";

    return 0;
}
