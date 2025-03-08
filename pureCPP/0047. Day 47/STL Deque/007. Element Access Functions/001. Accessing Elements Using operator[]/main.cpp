#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    std::cout << "First element: " << dq[0] << "\n";
    std::cout << "Third element: " << dq[2] << "\n";

    dq[1] = 100; // Modifying an element
    std::cout << "Modified second element: " << dq[1] << "\n";

    return 0;
}
