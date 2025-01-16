#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq = {1, 2, 3};
    std::cout << "Initial size: " << dq.size() << "\n";

    dq.resize(5);
    std::cout << "Size after resize to larger: " << dq.size() << "\n";

    dq.resize(2);
    std::cout << "Size after resize to smaller: " << dq.size() << "\n";

    return 0;
}
