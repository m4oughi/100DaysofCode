#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {100, 200, 300, 400};

    std::cout << "First element: " << dq.front() << "\n";
    std::cout << "Last element: " << dq.back() << "\n";

    dq.pop_front();
    dq.pop_back();
    std::cout << "After removing front and back: First element: " << dq.front() << ", Last element: " << dq.back() << "\n";

    return 0;
}
