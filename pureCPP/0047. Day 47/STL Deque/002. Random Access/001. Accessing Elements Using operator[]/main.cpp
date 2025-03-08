#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {10, 20, 30, 40, 50};

    std::cout << "Element at index 0: " << dq[0] << "\n";
    std::cout << "Element at index 3: " << dq[3] << "\n";

    return 0;
}
