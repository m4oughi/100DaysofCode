#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {100, 200, 300, 400};

    std::cout << "Front element: " << dq.front() << "\n";
    std::cout << "Back element: " << dq.back() << "\n";
    std::cout << "Element at index 2: " << dq.at(2) << "\n";

    return 0;
}
