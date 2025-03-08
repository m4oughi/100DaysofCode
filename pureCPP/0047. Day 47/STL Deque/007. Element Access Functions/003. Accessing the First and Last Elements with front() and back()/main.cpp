#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3, 4, 5};

    std::cout << "Front element: " << dq.front() << "\n";
    std::cout << "Back element: " << dq.back() << "\n";

    return 0;
}
